//
//  functions.c
//  Notes-02-13
//
//  Created by Aaron Block on 2/13/19.
//  Copyright © 2019 ACCrew. All rights reserved.
//

#include "functions.h"

int secret(int c);
const int myGlobal = 20;

int foo(int a, int b){
    if(a >0){
        return qud(a-1,b)+b;
    } else {
        return b;
    }
}

int qud(int a, int b){
    if(a >0){
        return foo(a-1,b)+b;
    } else {
        return b;
    }
}



void bar(int a){
    //int c = foo(a,a*2);
    int c = secret(a);
    printf("The value of c is %d\n", c);
}

int secret(int c){
    return c*20;
}
