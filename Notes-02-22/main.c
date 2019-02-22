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

int main(int argc, const char * argv[]) {
    printf("The number of params is %d\n", argc);
    for(int i =0;i<argc;i++){
        printf("Param %d is \"%s\"\n",i, argv[i]);
        int z = atoi(argv[i]) + 20;
        printf("Param %d plus 20 is %d\n",i, z);
    }
    return 0;
}
