//
//  main.c
//  Notes-02-15
//
//  Created by Aaron Block on 2/15/19.
//  Copyright © 2019 ACCrew. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x = 1;
    printf("The value of x is %d\n",x);
    int y = x | 2;
    printf("The value of y is %d\n",y);
    
    int z = y & 2;
    printf("The value of z is %d\n",z);
    
    int e = z << 2;
    printf("The value of e is %d\n",e);
    
    char flags = 0;
    //flags = flags | 0b1;
    flags = flags | 0x1;
    //flags = flags | 0b1000;
    flags = flags | 0x8;
    
    char flagOfBit1 = flags & 8;
    
    if (flagOfBit1){
        printf("the flag is true\n");
    } else {
        printf("The flag is not\n");
    }
    printf("The value of %d\n",flagOfBit1);
    
    return 0;
}
