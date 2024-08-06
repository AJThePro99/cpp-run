#include <iostream>
#include <string>

int main() {

    // for(initialization; condition  is 'boolean'; increment/decrement value) {}
    // A for loop, best suited for iterating for a known number of times
    for (int i = 1, b = 10; (i < b); i++,b--) {
        std::cout << i << std::endl;
        std::cout << b << std::endl;
    }


    std::cout << "----------" << std::endl;
    bool notBool = false;

    while (!notBool) { // '!' the logical NOT operator
        if (notBool != !notBool) {
            std::cout << "What did I just read?" << std::endl;
            break;
            // the break function exits the loop at that point, and stops the loop
        }
        else {
            std::cout << "This is a failsafe" << std::endl;
            break;
        }
    }
    std::cout << "----------" << std::endl;

    std::string greeting;
    do {
        std::cout << "What's the most common greeting known to programmers?" << std::endl;
        std::getline(std::cin, greeting);

    } while (greeting != "hello" && greeting != "hello world");
}