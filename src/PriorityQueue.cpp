#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Class to implement a priority queue
class PriorityQueue {
private:
    vector<pair<int, int>> heap; // Vector to store pairs of <priority, value>

public:
    // Method to insert a new element into the priority queue
    void insert(int priority, int value) {
        heap.push_back(make_pair(priority, value)); // Add the pair to the end of the vector
        push_heap(heap.begin(), heap.end()); // Reorder the heap to maintain heap property
    }

    // Method to remove the highest priority element from the priority queue
    void remove() {
        if (heap.empty()) return; // Check if the heap is empty

        pop_heap(heap.begin(), heap.end()); // Move the highest priority element to the end
        heap.pop_back(); // Remove the highest priority element
    }

    // Method to get the highest priority element without removing it
    int top() const {
        return heap.empty() ? -1 : heap.front().second; // Return the value with the highest priority
    }

    // Method to check if the priority queue is empty
    bool isEmpty() const {
        return heap.empty(); // Return true if the heap is empty
    }
};

int main() {
    PriorityQueue pq;

    // Example usage
    pq.insert(1, 100); // Insert a value 100 with priority 1
    pq.insert(3, 200); // Insert a value 200 with priority 3
    pq.insert(2, 150); // Insert a value 150 with priority 2

    cout << pq.top() << endl; // Should output: 200
    pq.remove(); // Remove the highest priority element (200)
    cout << pq.top() << endl; // Should output: 150

    return 0;
}
