//
//  main.cpp
//  ObjectC++
//
//  Created by Horvath, Leon on 2017. 11. 20..
//  Copyright © 2017. Horvath, Leon. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "Vectorclass.h"  //Including the Class: Vector and the method of calculating the distance
                          // And also the printf function of the points


int main(){
    int n;
    printf("Hany pontot szeretnel?");   //Asking how many Vectors the user wants
    scanf(" %d",&n);
    
    Vector *ptrvect = (Vector *)malloc(sizeof(Vector)*n);  //Reserve place in the heap for our Vectors

    for (int i =0;i<n;i++){         //A loop with the calling of the printf function
        ptrvect[i] = Vector();

        ptrvect[i].kiad();
        }
        int i, j;
        double max=0,   min=1000000,    d;     //Giving value for min&max for the calculation
        for (i=1; i<=n; i++) {          // We need two loops for the calculation
            
            for(j=1; j<=n; j++){
                
                if (i != j) {           //Without the if i!=j we would get 0
                 
                    d = ptrvect[i].tav(ptrvect[j]);     //Calling the calculate function
                    
                    if(d>max) max = d;                  //Check for the shortest and the longest function
                
                    if(d<min) min = d;
}
                }
                                    }
    printf("max = %f \n",max);                          // We print the longest and the shortest distance
    printf("min = %f \n",min);
    free(ptrvect);                                      //Free memory
}
