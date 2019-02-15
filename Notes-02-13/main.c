//
//  main.c
//  Notes-02-13
//
//  Created by Aaron Block on 2/13/19.
//  Copyright © 2019 ACCrew. All rights reserved.
//

#include <stdio.h>
#include "functions.h"



int main(int argc, const char * argv[]) {
    // insert code here...
    int x = 20;
    int y = 30;
    printf("The value of x is %d, %d !\n",x,y);
    bar(20);
    
    int q = qud(10,20);
    printf(" The value of q is %d\n", q);

    printf("My global is %d\n", myGlobal);
    
    printf("this exmaple here\n");
//    int w = secret(50);
//    printf("The value of w is %d\n", w);
    //    printf("Hello, World!\n"kjdhsf klsdjkjdkjsdhf kljds );
//    int x;
//    for(int i =0;i< 10;i++){
//        printf("The count\n");
//        if(i>5){
//            printf("i is greater than 5\n");
//        } else if (i>2){
//            printf("i is greater than 2\n");
//        } else {
//            printf("something else\n");
//        }
//    }
//
//    int z = foo(2,3);
//
//
    return 0;
}


