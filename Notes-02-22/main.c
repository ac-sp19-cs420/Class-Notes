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
    const char* f = "/Users/adblock/Desktop/temp.txt";
    FILE *fp = fopen(f, "w");
    putc('q', fp);
    fclose(fp);
    printf("Done!\n");
    return 0;
}
