// Created by Breanna Powell
// 501 B / FALL
// SID: 0641962
// Due: 2021 10 20

//** LinkedList */
#include <iostream>
#include "IList.h"
#include "LinkedList.h"
using namespace std;

//default constructor - initializes head to nullptr and listSize to 0
LinkedList::LinkedList()
   : head(nullptr), listSize(0)
{
}//end default constructor

//destructor
LinkedList::~LinkedList()
{
  clear();
}//end destructor

/** Gets the size of the list
 @return The integer is a count of nodes in the list. */
int LinkedList::getCurrentSize()const{
   return listSize;
}//end getCurrentSize

/** Check whether or not the list is empty.
   Look at the listSize variable and make sure it is 0.
 @return True if the list is empty, or false if not. */
bool LinkedList::isEmpty()const{
   if (listSize == 0){
   return true;
   }
   else
   return false;
}//end isEmpty

/** Adds a new node to the beginning of the list
 @post  If successful, anEntry is stored at the beginning of the 
   list, and the size of the list increases by 1.
 @param anEntry  The object to be added as an entry.
 @return  True if add is successful, or false if not. */
bool LinkedList::add(int anEntry){   
   Node* n = new Node; //Create a new node
   n->data = anEntry; //initialize data to anEntry
   n->next = nullptr; //initilize next to nullptr
   //If the list is not empty, add to the beginning of the list
   if(head != nullptr){
      n->next = head; //Link n to the head of the list
   }
   head = n; //Point the head pointer at the new node
   listSize++; //increase the size
   return true;
}//end add

/** Removes the first occurrence of a given entry from the list,
    if possible.
 @post  If successful, anEntry is removed from the list
    and the size of the list decreases by 1.
 @param anEntry  The entry to remove.
 @return  True if remove was successful, or false if not. */
bool LinkedList::remove(int anEntry){
   Node* delEntry = nullptr; //create a pointer to point to the node to delete
   Node* prev = head; //create a pointer to point to the previous node
   Node* curr = head; //create a pointer to point to the current node
   //traverse the list until the entry is found
   while (curr != nullptr && curr->data != anEntry){
      prev = curr;
      curr = curr->next;
   }   
   //if the list is empty, return false
   if (curr == nullptr){
      return false;
   }
   else {
      //Use delEntry pointer to point to the node to delete
      delEntry = curr;
      curr = curr->next; //move current to the next node
      prev->next = curr; //connect previous where current is now
      
      //Delete the node and return the space to the system memory
      delEntry->next = nullptr;
      delete delEntry;
      delEntry = nullptr;

      //Decrease list size
      listSize--;
      
      prev = nullptr; //return to memory
      curr = nullptr; //return to memory
      return true;
   } //end if
}//end remove

/** Prints the list
 @post If successful, prints out each entry in the list, one by one */
void LinkedList::printList(){
   Node* curr = head;
   while(curr != nullptr){
      cout << curr->data << " ";
      curr = curr->next;
   }
   curr = nullptr; //return to memory
}//end printList

/** Removes all nodes from this list.
 @post  The list contains no nodes, and the size of the list is 0. */
void LinkedList::clear(){
   while (!isEmpty()){
      //Point to the beginning of the list
      Node* curr = head;
      //Disconnect the first item on the list from the rest
      head = curr->next;
      //Delete the node and return the space to the system memory
      curr->next = nullptr;
      delete curr;
      curr = nullptr;
      listSize--; //Decrease the size of the list
   }
   head = nullptr; //return to memory
}//end clear

/** Tests whether the list contains a given entry.
 @param anEntry  The entry to locate.
 @return  True if list contains anEntry, or false if not. */
bool LinkedList::contains(int anEntry){
   Node* curr = head; //create a pointer to point to the current node
   //traverse the list until the entry is found
   while (curr != nullptr && curr->data != anEntry){
      curr = curr->next;
      traverseCount++; //increase the count of nodes traversed
   }   
   //if the list is empty, return false
   if (curr == nullptr){
      return false;
   }
   else {
      return true;
   }
   curr = nullptr; //return to memory
}//end contains

/** Get the count of number of nodes traversed.
 @return  The integer number of nodes traversed since last time the count was reset. */
int LinkedList::getTraverseCount(){
   return traverseCount;
}//end getTraverseCount

/** Reset the count of nodes traversed to zero. */
void LinkedList::resetTraverseCount(){
   traverseCount = 0;
}//end resetTraverseCount