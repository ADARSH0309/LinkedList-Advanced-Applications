#include "../src/SinglyLinkedList.cpp"

int main() {
   SinglyLinkedList list;

   list.insert(1);
   list.insert(2);
   list.deleteValue(1);
   list.traverse(); // Expected Output: 2

   return 0;
}
