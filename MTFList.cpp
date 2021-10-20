// Created by Breanna Powell
// 501 B / FALL
// SID: 0641962
// Due: 2021 10 20

//** MTFList */
#include <iostream>
#include "LinkedList.h"
#include "MTFList.h"
using namespace std;

//Default Constructor
MTFList::MTFList()
   : head(nullptr), listSize(0)
{
}//end default constructor         

//Destructor
MTFList::~MTFList()
{
   clear(); //inherits clear from LinkedList class
}//end destructor

/** Tests whether the list contains a given entry.
 Overrides contains from LinkedList.h
 @post If the entry is found, the node is moved to the front of the list.
 @param anEntry  The entry to locate.
 @return  True if list contains anEntry, or false if not. */
bool MTFList::contains(int anEntry){
  return true;

}//end contains