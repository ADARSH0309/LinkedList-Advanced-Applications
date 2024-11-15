#include <iostream>
#include <queue>
#include <string>
using namespace std;

// Class representing a ticket queue
class TicketQueue {
private:
    queue<string> tickets; // Queue to store tickets

public:
    // Method to add a ticket to the queue
    void enqueue(const string& ticket) {
        tickets.push(ticket); // Add the ticket to the end of the queue
    }

    // Method to remove a ticket from the queue
    string dequeue() {
        if (tickets.empty()) { // Check if the queue is empty
            cout << "No tickets in the queue" << endl; // Print message if no tickets
            return ""; // Return empty string to indicate no ticket
        }
        
        string ticket = tickets.front(); // Get the ticket at the front of the queue
        tickets.pop(); // Remove the front ticket from the queue
        
        return ticket; // Return the ticket
    }

    // Method to check if the queue is empty
    bool isEmpty() const {
        return tickets.empty(); // Return true if the queue is empty
    }
};

int main() {
    TicketQueue queue;

    // Example usage
    queue.enqueue("Ticket 1"); // Add Ticket 1 to the queue
    queue.enqueue("Ticket 2"); // Add Ticket 2 to the queue
    queue.enqueue("Ticket 3"); // Add Ticket 3 to the queue

    cout << queue.dequeue() << endl; // Should output: Ticket 1
    cout << queue.dequeue() << endl; // Should output: Ticket 2
    cout << queue.isEmpty() << endl; // Should output: 0 (false)
    cout << queue.dequeue() << endl; // Should output: Ticket 3
    cout << queue.isEmpty() << endl; // Should output: 1 (true)

    return 0;
}
