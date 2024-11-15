#include <iostream>
using namespace std;

// Node class representing an element in the singly linked list
class Node {
public:
    int data; // Data stored in the node
    Node* next; // Pointer to the next node in the list

    // Constructor to initialize a node with a given value
    Node(int value) : data(value), next(nullptr) {}
};

// SinglyLinkedList class to manage a singly linked list
class SinglyLinkedList {
private:
    Node* head; // Pointer to the head of the list

public:
    // Constructor to initialize the list
    SinglyLinkedList() : head(nullptr) {}

    // Method to insert a new node at the beginning of the list
    void insert(int value) {
        Node* newNode = new Node(value); // Create a new node with the given value
        newNode->next = head; // Set the new node's next pointer to the current head
        head = newNode; // Update the head to the new node
    }

    // Method to delete a node with the specified value from the list
    void deleteValue(int value) {
        if (head == nullptr) return; // Check if the list is empty

        if (head->data == value) { // Check if the head node contains the value
            Node* temp = head; // Temporarily store the head node
            head = head->next; // Update the head to the next node
            delete temp; // Delete the old head node
            return;
        }

        Node* current = head; // Start traversing from the head
        while (current->next != nullptr && current->next->data != value) {
            current = current->next; // Move to the next node
        }

        if (current->next != nullptr) { // Check if the value is found
            Node* temp = current->next; // Temporarily store the node to be deleted
            current->next = current->next->next; // Update the next pointer to skip the deleted node
            delete temp; // Delete the node
        }
    }

    // Method to traverse and print the list
    void traverse() {
        Node* current = head; // Start traversing from the head
        while (current != nullptr) { // Continue until the end of the list
            cout << current->data << " "; // Print the data of the current node
            current = current->next; // Move to the next node
        }
        cout << endl; // Print a new line at the end
    }
};

int main() {
    SinglyLinkedList list;

    // Example usage
    list.insert(3); // Insert 3 at the beginning
    list.insert(2); // Insert 2 at the beginning
    list.insert(1); // Insert 1 at the beginning
    list.traverse(); // Should output: 1 2 3

    list.deleteValue(2); // Delete the node with value 2
    list.traverse(); // Should output: 1 3

    return 0;
}
