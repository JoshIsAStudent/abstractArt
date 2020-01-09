//
//  Circles.hpp
//  abstractArt
//
//  Created by Jake Hobbs on 16/12/2019.
//

#ifndef Circles_hpp
#define Circles_hpp

#include "ofMain.h"
#include <vector>

struct shape {
	int x;
	int y;
	int rad;
	int r , g , b;
};

class Circles{
    
public:
    void setup();
    void draw();
    void update();
	vector<shape> shapes;
};

#endif /* Circles_hpp */
