#include <iostream>
#include "Box.h"
int sum(int a, int b){
    return  a+b;

}

class TestClass{
private:
    int id;
public:
    //
    int getId() const {
        return id;
    }

    void setId(int id) {
        TestClass::id = id;
    }
};

int main() {
//    int a = 3;
//    int b = 4;
//    std::cout << "Hello, World!" << std::endl;
//    std::cout << sum(a, b)<<std::endl;
//    TestClass test1{};
//    test1.setId(4);
//    std::cout << test1.getId()<<std::endl;
    Box box;
    box.set(3, 4, 5.4);
    double V = box.getV();
    std::cout<< V<<std::endl;
    return 0;
}
