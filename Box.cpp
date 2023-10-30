//
// Created by ftang on 2023/10/30.
//

#include "Box.h"

double Box::getV(void) {
    return height*length*breadth;
}

void Box::set(double len, double bre, double hei) {
    height = hei;
    breadth = bre;
    length = len;
}
