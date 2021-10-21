// Created by Breanna Powell
// 501 B / FALL
// SID: 0641962
// Due: 2021 10 20

//** MTFList */
#include <iostream>
#include "MTFList.h"
using namespace std;


/** Tests whether the list contains a given entry.
 Overrides contains from LinkedList.h
 @post If the entry is found, the node is moved to the front of the list.
 @param anEntry  The entry to locate.
 @return  True if list contains anEntry, or false if not. */
bool MTFList::contains(int anEntry){
   Node* moveEntry = nullptr; //create a pointer to point to the node to move
   Node* prev = head; //create a pointer to point to the previous node
   Node* curr = head; //create a pointer to point to the current node
   
   if (getCurrentSize() != 0)
      traverseCount++; //If the list is not empty, there should be at least 1 node traversed.
   
   //traverse the list until the entry is found
   while (curr != nullptr && curr->data != anEntry){
      prev = curr;
      curr = curr->next;
      traverseCount++; //Increase the count of nodes traversed
   }  

   //if the list is empty, return false -- data was not found
   if (curr == nullptr){
      return false;
   }
   else {
      //If the list is not empty, use moveEntry pointer to point to the node to delete
      moveEntry = curr;
      curr = curr->next; //Move current to the next node
      moveEntry->next = head; //Link the moved node to the head of the list
      prev->next = curr; //Link previous node to where current is now
      head = moveEntry; //Point the head pointer at the new node
      
      moveEntry = nullptr; //return to memory
      prev = nullptr; //return to memory
      curr = nullptr; //return to memory
      return true;
   } //end if
}//end contains