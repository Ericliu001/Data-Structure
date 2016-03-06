//
//  main.c
//  LinekdList
//
//  Created by Ce Liu on 5/03/2016.
//  Copyright © 2016 Eric Liu Developer. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>



struct Node{
    int data;
    struct Node* next;
};

void printList(struct Node* temp);
void insertAtHead( struct Node** pointer2Head, int data);

void insertAtIndex(struct Node** pointer2Head, int index, int data);

int main(int argc, const char * argv[]) {
    
    
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    (*head).data = 4;
    head -> next = NULL;
    
    insertAtHead(&head, 3);
    insertAtHead(&head, 2);
    insertAtHead(&head, 1);
    
    insertAtIndex(&head, 4, 0);
    
    printList(head);
    
    
    return 0;
}


void insertAtHead( struct Node** pointer2Head, int data){
    struct Node* temp = malloc(sizeof(struct Node));
    temp -> data = data;
    temp -> next = *pointer2Head;
    *pointer2Head = temp;
}

void insertAtIndex(struct Node** pointer2Head, int index, int data){
    struct Node* head = *pointer2Head;
    struct Node* prev = head;
    struct Node* insertingNode = (struct Node*)malloc(sizeof(struct Node));
    insertingNode -> data = data;
    insertingNode -> next = NULL;
    
    if (index == 0) {
        insertingNode -> next = head;
        (*pointer2Head) = insertingNode;
        return;
    }
    
    
    int i = 0;
    while (i < index - 1 && prev -> next != NULL) {
        i++;
        prev = prev -> next;
    }
    
    
    if (i == index - 1) {
        insertingNode -> next = prev -> next;
        prev -> next = insertingNode;
    }
    
    
    
}


void printList(struct Node* temp){
    while (temp != NULL) {
        int data = temp -> data;
        printf("The data of this node is %d \n", data);
        temp = temp -> next;
    }
}
