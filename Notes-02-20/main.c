//
//  main.c
//  Notes-02-20
//
//  Created by Aaron Block on 2/20/19.
//  Copyright © 2019 ACCrew. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //Small change
    char a[2][3];
    a[0][0] = 'a';
    char* b = (char*)malloc(sizeof(char)*3);
    char* c = (char*)malloc(sizeof(char)*3);
    char** d = (char**)malloc(sizeof(char*)*2);
    d[0] = b;
    d[1] = c;
    
    char* e[2];
    e[0] = b;
    e[1] = c;
    
    free(b);
    free(c);
    free(d);
    //Don't need to free e because it's on the stack
    return 0;
}
