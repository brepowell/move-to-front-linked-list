// Created by Breanna Powell
// 501 B / FALL
// Due: 2021 10 20

Writeup:
The outputs of the program were as follows:
LINKED LIST:
Average number of nodes traversed per access (uniform): 500.778
Average number of nodes traversed per access (normal): 500.791

MOVE-TO-FRONT LIST:
Average number of nodes traversed per access (uniform): 498.903
Average number of nodes traversed per access (normal): 388.467

It takes a village! On Monday, I utilized the office hours and got help with making sure that I had semicolons in the correct places and other syntactical problems. I also asked about the add method and whether or not it should add to the front of the list. I wrote all of my methods on Monday. On Tuesday, I got help from Carl with remembering how to run all of the tests, including the tests for memory leaks. I took careful notes on the whole process so that I won't have issues with forgetting how to do it ever again! On Wednesday, I went to tutoring and learned about using the "virtual" keyword in LinkedList on the method. The tutor said that my logic was sound, but he wasn't sure how to help me with the inheritance issues that my program was having. Then, later, I consulted with my classmates via Zoom and discovered that I was declaring too many things in my MTFList file. I just needed to cut all of the items that were inherited from LinkedList. I also needed to change some elements to protected instead of private. After I did that, the program ran great!

To test it, I made a main.cpp file and used a series of cout statments, along with a short linked list of 5 nodes. That allowed me to make sure that there were no memory leaks before attempting the large list with LinkedListStats. I checked the list size and isEmpty several times, to make sure that the add, remove, clear, contains, and other methods were all working. It's clear from the results that the MTF list saves a lot of time and space with 388 average nodes traversed compared to 500 nodes traversed.
