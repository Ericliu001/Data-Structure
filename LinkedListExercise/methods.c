//
//  methods.c
//  data.structure
//
//  Created by Eric Liu on 26/04/2016.
//  Copyright © 2016 Eric Liu Developer. All rights reserved.
//

#include "methods.h"


struct Node* head = NULL;

void printList(){
    
    struct Node* temp = head;
    
    printf("\n---------Start printing list ---------\n");
    while (temp != NULL) {
        printf("%d, ", temp -> data );
        
        temp = temp -> next;
    }
    printf("\n=========Stop printing list  =========\n");
    
}

void insertAtHead(int data){
    struct Node* temp = malloc(sizeof(struct Node));
    temp -> data = data;
    temp -> next = head;
    head = temp;
}

void insertAtIndex(int index, int data){
    if (index == 0) {
        insertAtHead(data);
        return;
    }
    
    struct Node* temp = malloc(sizeof(struct Node));
    struct Node* current = head;
    struct Node* next = current;
    
    int i = 0;
    while (next != NULL & i < index) {
        current = next;
        next = next -> next;
        i++;
    }
    
    if (i == index) {
        temp -> data = data;
        temp -> next = next;
        current -> next = temp;
    }else{
        printf(" index out of bound!");
    }
    
}

void deleteAtHead(){
    if (head == NULL) {
        return;
    }
    
    struct Node* temp = head;
    head = head -> next;
    free(temp);
}


void deleteAtIndex(int index){
    if (index == 0) {
        deleteAtHead();
        return;
    }
    
    struct Node* current = head;
    struct Node* next = current;
    struct Node* temp;
    
    int i = 0;
    while (next -> next != NULL & i < index) {
        next = next -> next;
        i++;
    }
    
    if (i == index) {
        temp = next;
        current -> next = next -> next;
        free(temp);
    }else{
        printf(" index out of bound!");
    }
    
    
    
    
}

void reverseList(){
    struct Node *prev, *current, *next;
    prev = NULL;
    next = head;
    current = next;
    
    while (next != NULL) {
        current = next;
        next = next -> next;
        
        current -> next = prev;
        prev = current;
    }
    
    // DO NOT forget this line!!!!
    head = current;

}




void reverseRecursive( struct Node* pointer){
    if (pointer -> next == NULL) {
        head = pointer;
        return;
    }else{
        
        reverseRecursive(pointer -> next);
        pointer -> next -> next = pointer;
        pointer -> next = NULL;
        
    }
}
