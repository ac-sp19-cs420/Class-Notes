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

typedef struct point{
    double x;
    double y;
} point;

double origin_distance(point* p){
    
    double dis = pow(pow(p->x, 2.0) + pow(p->y, 2.0), 0.5);
    return dis;
}

int main(int argc, const char * argv[]) {

    point* p = (point*)malloc(sizeof(point));
    p->x = 20;
    p->y = 30;
    double d = origin_distance(p);
    printf("The value is %.2f\n",d);
    
    return 0;
}
