#ifndef MORELINKEDLISTFUNCS_H
#define MORELINKEDLISTFUNCS_H

#include "linkedList.h"

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element  
// If more than one element has largest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node * pointerToMax(LinkedList *list);

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.  
// You may assume list has at least one element
// If more than one element has smallest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head


Node * pointerToMin(LinkedList *list);

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list);

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list);

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList * list);
// list: ptr to a linked list of Node (each with int data, and Node * next)
// value: int value of the node to delete
// Delete the Node with the given value in a recursive way. 
// Use a helper function that performs the recursion

void deleteNodeRecursively(LinkedList * list, int value);

// list: ptr to a linked list of Node (each with int data, and Node * next)
// value: int value of the node to delete
// Delete the Node with the given value using loops. 

void deleteNodeIteratively(LinkedList * list, int value);

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Nodes in the linked list are expected to be in sorted ascending order
// value: int value of the node to insert
// Insert a new node in the linked list with the given value at the right spot
// The final linked list should have all its nodes in sorted ascending order
void insertNodeToSortedList(LinkedList * list, int value);

#endif
