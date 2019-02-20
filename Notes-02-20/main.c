//
//  main.c
//  Notes-02-20
//
//  Created by Aaron Block on 2/20/19.
//  Copyright © 2019 ACCrew. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int* foo(){
    int a = 10;
    return &a;
}

int bar(){
    int b = 11;
    int c = 30;
    int d = 40;
    return b+c+d;
}

int main(int argc, const char * argv[]) {
    int* a = foo();
    printf("The value of a is %d\n", *a);
    int c = bar();
    printf("The value of a is %d\n", *a);
    printf("C %d\n",c);
    
    return 0;
}
