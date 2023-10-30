#include "complex.h"
#include <iostream>

int main(){
    complex<double> complex1{3, 5};
    std::cout<<complex1.getIm()<<std::endl;
    std::cout<<complex1.getRe()<<std::endl;

}