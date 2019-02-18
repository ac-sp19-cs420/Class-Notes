//
//  main.c
//  Notes-02-18
//
//  Created by Aaron Block on 2/18/19.
//  Copyright © 2019 ACCrew. All rights reserved.
//

#include <stdio.h>

void foo(int*a){
    (*a) = (*a) + 100;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 20;
    int b = 30;
    int c = 40;
    int* a_ptr = &a;
    int* b_ptr = &b;
    int* c_ptr = &c;
    
    printf("The location of a is %p\n", a_ptr);
    printf("The location of b is %p\n", b_ptr);
    printf("The location of c is %p\n", c_ptr);
    
    *a_ptr = 60;
    int theValueOfA = *a_ptr;
    printf("The value  of a is %d\n", theValueOfA);
    printf("The value  of a is %d\n", a);
    foo(&c);
    printf("The value  of c is %d\n", c);

    int d = sizeof(char*);
    printf("The size of %d\n", d);
    return 0;
}
