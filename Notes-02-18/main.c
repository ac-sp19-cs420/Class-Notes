//
//  main.c
//  Notes-02-18
//
//  Created by Aaron Block on 2/18/19.
//  Copyright © 2019 ACCrew. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int size = sizeof(long);
    char aaron[] = "aaron";
    char david[] = "david";
    char block[] = "block";
    
    printf("%s\n", david);
    printf("%c\n", david[0]);
    for(int i = 0;i<10;i++){
        printf("%c\n", david[i]);
    }
    
    printf(" The memory of aaron %p\n", aaron);
    printf(" The memory of david %p\n", david);
    printf(" The memory of block %p\n", block);
    printf("It is %d bytes large\n", size);
    return 0;
}
