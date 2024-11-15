#include "../src/PostfixCalculator.cpp"

int main() {
   PostfixCalculator calculator;

   cout << calculator.evaluate("5 1 2 + 4 * + 3 -") << endl; // Expected Output: 14

   return 0;
}
