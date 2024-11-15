#include <iostream>
using namespace std;

// Class representing a node in a doubly linked list
class DNode {
public:
    int data; // Data stored in the node
    DNode* next; // Pointer to the next node in the list
    DNode* prev; // Pointer to the previous node in the list

    // Constructor to initialize a node with a given value
    DNode(int value) : data(value), next(nullptr), prev(nullptr) {}
};

// Class implementing a doubly linked list
class DoublyLinkedList {
private:
    DNode* head; // Pointer to the head of the list

public:
    // Constructor to initialize the list
    DoublyLinkedList() : head(nullptr) {}

    // Method to insert a new node at the beginning of the list
    void insert(int value) {
        DNode* newNode = new DNode(value); // Create a new node with the given value
        newNode->next = head; // Set the new node's next pointer to the current head
        if (head != nullptr) { // If the list is not empty
            head->prev = newNode; // Set the previous head node's prev pointer to the new node
        }
        head = newNode; // Update the head to the new node
    }

    // Method to delete a node with the specified value from the list
    void deleteValue(int value) {
        if (head == nullptr) return; // Check if the list is empty

        if (head->data == value) { // Check if the head node contains the value
            DNode* temp = head; // Temporarily store the head node
            head = head->next; // Update the head to the next node
            if (head != nullptr) { // If the list is not empty after update
                head->prev = nullptr; // Set the new head node's prev pointer to nullptr
            }
            delete temp; // Delete the old head node
            return;
        }

        DNode* current = head; // Start traversing from the head
        while (current != nullptr && current->data != value) {
            current = current->next; // Move to the next node
        }

        if (current != nullptr) { // Check if the value is found
            if (current->next != nullptr) { // If it's not the last node
                current->next->prev = current->prev; // Update the next node's prev pointer
            }
            if (current->prev != nullptr) { // If it's not the first node
                current->prev->next = current->next; // Update the previous node's next pointer
            }
            delete current; // Delete the node
        }
    }

    // Method to traverse and print the list
    void traverse() {
        DNode* current = head; // Start traversing from the head
        while (current != nullptr) { // Continue until the end of the list
            cout << current->data << " "; // Print the data of the current node
            current = current->next; // Move to the next node
        }
        cout << endl; // Print a new line at the end
    }
};

int main() {
    DoublyLinkedList list;

    // Example usage
    list.insert(3); // Insert 3 at the beginning
    list.insert(2); // Insert 2 at the beginning
    list.insert(1); // Insert 1 at the beginning
    list.traverse(); // Should output: 1 2 3

    list.deleteValue(2); // Delete the node with value 2
    list.traverse(); // Should output: 1 3

    return 0;
}
