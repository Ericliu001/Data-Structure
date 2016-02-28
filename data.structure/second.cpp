//
//  second.cpp
//  data.structure
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

void printList(struct Node* head){
    struct Node* current = head;
    while(current != NULL){
        printf(" address: %u, data: %d, next: %u ",current, current -> data, current->next);
        current = current -> next;
    }
    
    printf("\n");
}

int main(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 5;
    head->next = NULL;
    
    
    struct Node* element1 = (struct Node*)malloc(sizeof(struct Node));
    element1->data = 4;
    element1->next = NULL;
    head->next = element1;
    
    struct Node* element2 = (struct Node*)malloc(sizeof(struct Node));
    element2->data = 3;
    element2->next = NULL;
    element1->next = element2;
    
    printList(head);
}