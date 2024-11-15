#include <iostream>
using namespace std;

// Class representing a node in a circular linked list
class CNode {
public:
    int data; // Data stored in the node
    CNode* next; // Pointer to the next node in the list

    // Constructor to initialize a node with a given value
    CNode(int value) : data(value), next(nullptr) {}
};

// Class implementing a circular linked list
class CircularLinkedList {
private:
    CNode* tail; // Pointer to the tail of the list

public:
    // Constructor to initialize the list
    CircularLinkedList() : tail(nullptr) {}

    // Method to insert a new node into the list
    void insert(int value) {
        CNode* newNode = new CNode(value); // Create a new node with the given value
        if (tail == nullptr) { // Check if the list is empty
            tail = newNode; // Set tail to the new node
            tail->next = tail; // Point to itself
        } else {
            newNode->next = tail->next; // New node points to the first node
            tail->next = newNode; // Tail points to the new node
            tail = newNode; // Update tail to the new node
        }
    }

    // Method to traverse and print the list
    void traverse() {
        if (tail == nullptr) return; // Check if the list is empty

        CNode* current = tail->next; // Start from the first node
        do {
            cout << current->data << " "; // Print the data of the current node
            current = current->next; // Move to the next node
        } while (current != tail->next); // Continue until back to the first node
        
        cout << endl; // Print a new line at the end
    }
};

int main() {
    CircularLinkedList list;

    // Example usage
    list.insert(1); // Insert 1 into the list
    list.insert(2); // Insert 2 into the list
    list.insert(3); // Insert 3 into the list
    list.traverse(); // Should output: 1 2 3

    return 0;
}
