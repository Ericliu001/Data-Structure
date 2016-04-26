//
//  main.c
//  LinkedListExercise
//
//  Created by Eric Liu on 26/04/2016.
//  Copyright © 2016 Eric Liu Developer. All rights reserved.
//

#include <stdio.h>
#include "methods.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    
    insertAtHead(3);
    insertAtHead(2);
    insertAtHead(1);
    printList();
    
    insertAtIndex(3, 4);
    printList();
    
    return 0;
}
