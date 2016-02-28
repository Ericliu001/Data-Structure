//
//  main.cpp
//  LinkedList
//
//  Created by Ce Liu on 28/02/2016.
//  Copyright © 2016 Eric Liu Developer. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(int data);
struct Node* head;

void printList(struct Node* head){
    struct Node* current = head;
    while(current != NULL){
        printf(" address: %u, data: %d, next: %u  \n",current, current -> data, current->next);
        current = current -> next;
    }
    
    printf("\n");
}

int main(){
    Node* element2 = (struct Node*)malloc(sizeof(struct Node));
    element2->data = 5;
    element2->next = NULL;
    
    Node* element1 = new Node;
    element1->data = 4;
    element1->next = element2;
    
    
    head = element1;

    insertAtBeginning(250);
    printList(head);
}


void insertAtBeginning(int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp -> data = x;
    temp -> next = head;
    head = temp;
}
