#include "../src/DoublyLinkedList.cpp"

int main() {
   DoublyLinkedList list;

   list.insert(1);
   list.insert(2);
   list.deleteValue(2);
   list.traverse(); // Expected Output: 1

   return 0;
}
