//
// Created by ftang on 2023/10/30.
//

#ifndef DEMO_COMPLEX_H
#define DEMO_COMPLEX_H
template<typename T>

class complex {
private:
    T re, im;
public:
    complex(T r = 0, T  i = 0)
        : re(r), im(i)
    {}

    T getRe() const {
        return re;
    }

    T getIm() const {
        return im;
    }



};


#endif //DEMO_COMPLEX_H
