//
//  Vectorclass.h
//  ObjectC++
//
//  Created by Horvath, Leon on 2017. 11. 21..
//  Copyright © 2017. Horvath, Leon. All rights reserved.
//

#ifndef Vectorclass_h
#define Vectorclass_h
#include <iostream>
#include <stdlib.h>
#include <math.h>


class Vector {
    
private:     //Points of the Class
    float x;
    float y;
    float z;
    
public: Vector(){ //Giving value to the points
    
    x=rand()%100+1;
    y=rand()%100+1;
    z=rand()%100+1;
    
}
    
    void kiad(){  //The printf function
        printf("A pont koordinátái: x=%2f y=%2f z=%2f \n", x, y ,z);
    };
    
    
    
    double tav(Vector v){ //Calculate distance function
        
        
        double d = sqrt(pow(x-v.x,2) + pow(y - v.y,2) + pow(z-v.z,2));
        return d;
        
    };
    
    
    
};

#endif /* Vectorclass_h */
