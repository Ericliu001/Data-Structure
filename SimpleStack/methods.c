//
//  methods.c
//  data.structure
//
//  Created by Eric Liu on 25/04/2016.
//  Copyright © 2016 Eric Liu Developer. All rights reserved.
//

#include "methods.h"

int myStack[MAX_SIZE];
int top = -1;

void push(int x){
    if (top == MAX_SIZE - 1) {
        printf("Stack over flow!");
        return;
    }
    
    myStack[++top] = x;
    printStack();

}

void pop(){
    if (top == -1) {
        printf(" empty stack! " );
    }
    
    top --;
    printStack();
    
}

int peek(){
    return myStack[top];
}

void printStack(){
    for (int i = 0; i <= top; i ++) {
        printf(" %d, ", myStack[i]);
    }
    
    printf(" \n");
}
