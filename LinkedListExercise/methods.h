//
//  methods.h
//  data.structure
//
//  Created by Eric Liu on 26/04/2016.
//  Copyright © 2016 Eric Liu Developer. All rights reserved.
//

#ifndef methods_h
#define methods_h

#include <stdio.h>
#include <stdlib.h>

#endif /* methods_h */



struct Node{
    int data;
    struct Node* next;
};

extern struct Node* head;


void printList();

void insertAtHead(int data);

void insertAtIndex(int index, int data);

void deleteAtHead();

void deleteAtIndex(int index);

void reverseList();

void reverseRecursive( struct Node* pointer);
