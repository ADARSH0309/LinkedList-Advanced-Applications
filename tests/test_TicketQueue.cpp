#include "../src/TicketQueue.cpp"

int main() {
   TicketQueue queue;

   queue.enqueue("ticket1");
   queue.enqueue("ticket2");
   
   cout << queue.dequeue() << endl; // Expected Output: ticket1

   return 0;
}
