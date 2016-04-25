//
//  main.c
//  SimpleStack
//
//  Created by Eric Liu on 24/04/2016.
//  Copyright © 2016 Eric Liu Developer. All rights reserved.
//

#include <stdio.h>
#include "methods.h"


int main(int argc, const char * argv[]) {

    push(1);
    push(2);
    push(3);
    pop();
    pop();
    push(4);
    push(5);
    push(6);
    
    return 0;
}
