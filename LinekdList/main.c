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

int main(int argc, const char * argv[]) {
    
    
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    (*head).data = 3;
    head -> next = NULL;
    
    insertAtHead(&head, 250);
    printList(head);
    
    
    return 0;
}


void insertAtHead( struct Node** pointer2Head, int data){
    struct Node* temp = malloc(sizeof(struct Node));
    temp -> data = data;
    temp -> next = *pointer2Head;
    *pointer2Head = temp;
}


void printList(struct Node* temp){
    while (temp != NULL) {
        int data = temp -> data;
        printf("The data of this node is %d \n", data);
        temp = temp -> next;
    }
}
