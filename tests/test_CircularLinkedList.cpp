#include "../src/CircularLinkedList.cpp"

int main() {
   CircularLinkedList list;

   list.insert(1);
   list.insert(2);
   list.traverse(); // Expected Output: 1 -> 2 -> 

   return 0;
}
