#include "../src/PriorityQueue.cpp"

int main() {
   PriorityQueue pq;

   pq.insert(3, 3);
   pq.insert(1, 1);
   pq.insert(2, 2);
   
   pq.remove();
   
   cout << pq.top() << endl; // Expected Output: 1

   return 0;
}
