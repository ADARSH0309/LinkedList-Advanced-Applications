# Linked List Implementations and Advanced Applications in C++

## Project Overview
This repository contains C++ implementations of various types of linked lists including singly linked lists, doubly linked lists, and circular linked lists. Additionally, it includes applications such as a postfix calculator, a ticketing system simulation using queues, and a priority queue implementation.

## Contents
- **src/**
  - SinglyLinkedList.cpp: Class for singly linked list operations.
  - DoublyLinkedList.cpp: Class for doubly linked list operations.
  - CircularLinkedList.cpp: Class for circular linked list operations.
  - PostfixCalculator.cpp: Class for evaluating postfix expressions.
  - TicketQueue.cpp: Class simulating a ticketing system.
  - PriorityQueue.cpp: Class implementing a priority queue using heaps.
- **tests/**
  - test_SinglyLinkedList.cpp: Test cases for singly linked list.
  - test_DoublyLinkedList.cpp: Test cases for doubly linked list.
  - test_CircularLinkedList.cpp: Test cases for circular linked list.
  - test_PostfixCalculator.cpp: Test cases for postfix calculator.
  - test_TicketQueue.cpp: Test cases for ticket queue simulation.
  - test_PriorityQueue.cpp: Test cases for priority queue implementation.
- report.pdf: Analysis of time and space complexity of data structures.

## How to Run the Tests

1. Compile the C++ files using g++:
```bash
g++ -o test_SinglyLinkedList tests/test_SinglyLinkedList.cpp src/SinglyLinkedList.cpp 
./test_SinglyLinkedList

g++ -o test_DoublyLinkedList tests/test_DoublyLinkedList.cpp src/DoublyLinkedList.cpp 
./test_DoublyLinkedList

g++ -o test_CircularLinkedList tests/test_CircularLinkedList.cpp src/CircularLinkedList.cpp 
./test_CircularLinkedList

g++ -o test_PostfixCalculator tests/test_PostfixCalculator.cpp src/PostfixCalculator.cpp 
./test_PostfixCalculator 

g++ -o test_TicketQueue tests/test_TicketQueue.cpp src/TicketQueue.cpp 
./test_TicketQueue 

g++ -o test_PriorityQueue tests/test_PriorityQueue.cpp src/PriorityQueue.cpp 
./test_PriorityQueue 
