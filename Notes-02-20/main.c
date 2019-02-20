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
    char* a = "Hello";
    char b[5];
    printf("a:%p\n",a);
    printf("b:%p\n",b);
    
    char* e = (char*)malloc(sizeof(char)*5);
    char* c = (char*)malloc(sizeof(char)*6);
    char* d = (char*)malloc(sizeof(char)*5);
    c[0] = 'h';
    c[1] = 'e';
    c[2] = 'l';
    c[3] = 'l';
    c[4] = 'o';
    c[5] = 0;
    printf("c:%p\n", c);
    printf("The string is %s\n", c);
    printf("The location of d %p\n", d);
    printf("The location of e %p\n", e);
    free(c);
    free(e);
    free(d);
    
    return 0;
}
