//
//  main.c
//  Laci adta feladat
//
//  Created by Horvath, Leon on 2017. 11. 10..
//  Copyright © 2017. Horvath, Leon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
typedef struct Points3D {
    float x;
    float y;
    float z;
} Points3D;

int main(int argc, const char * argv[]) {
    
    
    Points3D **ptr;
    time_t t;
    
    int a;
    float max,min;
    double d;
    
    
    printf("Add meg hany pontot szeretnel: ");
    scanf("%d",&a);
    
    ptr = (Points3D**) malloc (a * sizeof(Points3D*));
    for (int i=0; i<a;i++){
        Points3D *point = (Points3D*) malloc (sizeof(Points3D));
        
        Points3D point2;
        point2.x=rand() % 100;
        point2.y=rand() % 100;
        point2.z=rand() % 100;
        ptr[i] = &point2;
        
        /*ptr[i] = point;
        point->x=rand() % 100;
        point->y=rand() % 100;
        point->z=rand() % 100;*/
    }
    
    //for
    // printf ("Az %d. pont koordinátái: %fl %fl %fl\n",i+1,point->x,point->y,point->z);
    for (int i=0; i<a;i++){
       printf ("Az %d. pont koordinátái: x=%fl y=%fl z=%fl\n",i+1,ptr[i]->x,ptr[i]->y,ptr[i]->z);
    }
    max = 0;
    min = 1000;
    for (int i=0; i<a;i++){
        for(int j=0;j<a;j++) {
            if (i != j)
                d = sqrt(sqrt(ptr[i]->x - ptr[j]->x)+(sqrt(ptr[i]->z - ptr[j]->z)+(sqrt(ptr[i]->y - ptr[j]->y))));
            if(d<min)
                min=d;
            if(d>max)
                min=d;
        }
    }
    printf("A legrövidebb tavolsag: %fl\n", &min);
    printf("A leghosszabb: %fl", &max);
        
    return 0;
}
