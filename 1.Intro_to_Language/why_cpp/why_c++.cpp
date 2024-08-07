// Object Oriented Programming is possible in C++
#include <iostream>

class myClass {
    public:
    void myFunc() {
        // Here is some code
        std::cout << ("myFunc from myClass is runing Y'all!") << std::endl;
    }
}; // never forget the semicolon after classes & structs

int main() {
    myClass object;
    object.myFunc();
}