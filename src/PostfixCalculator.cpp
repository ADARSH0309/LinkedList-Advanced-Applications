#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

// Class to evaluate postfix expressions
class PostfixCalculator {
public:
    // Method to evaluate a postfix expression
    int evaluate(const string& expression) {
        stack<int> s; // Stack to hold operands
        istringstream iss(expression); // Input string stream to read the expression
        string token;

        // Loop through each token in the expression
        while (iss >> token) {
            if (isdigit(token[0])) { // If it's a number, push it onto the stack
                s.push(stoi(token));
            } else { // Otherwise, it's an operator
                int b = s.top(); s.pop(); // Pop the top two operands from the stack
                int a = s.top(); s.pop();
                
                // Perform the operation and push the result back onto the stack
                switch (token[0]) {
                    case '+': s.push(a + b); break;
                    case '-': s.push(a - b); break;
                    case '*': s.push(a * b); break;
                    case '/': s.push(a / b); break;
                }
            }
        }
        
        return s.top(); // The result is on top of the stack
    }
};

int main() {
    PostfixCalculator calculator;

    // Example usage
    string expression = "3 4 + 2 * 7 /";
    cout << "Expression: " << expression << endl;
    cout << "Result: " << calculator.evaluate(expression) << endl; // Should output: 2

    return 0;
}
