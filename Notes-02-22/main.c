//
//  main.c
//  Notes-02-22
//
//  Created by Aaron Block on 2/22/19.
//  Copyright © 2019 ACCrew. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int my_int, my_int2,my_int3;
    double my_double, my_double2,my_double3;
    char* str = "4 3.1";
    
    printf("Please enter a int and double:\n");
    scanf("%d %lf",&my_int,&my_double);
    printf("Please enter a string:\n");
    
    printf("Now seperate by / int and double:\n");
    scanf("%d/%lf",&my_int2,&my_double2);
    
    sscanf(str, "%d %lf",&my_int3,&my_double3);
    
    printf("You entered: %d, %lf\n", my_int, my_double);
    printf("You entered: %d, %lf\n", my_int2, my_double2);
    printf("You entered: %d, %lf\n", my_int3, my_double3);
}
