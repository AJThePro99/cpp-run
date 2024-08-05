#include <iostream>


int main() {
    int a =5, b = 10;

    if (a > 0 && b > 0) // '&&' is AND '||' is OR
        std::cout << "Both values are positive" << std::endl;

    int x = 250;

    if (x) // If value is not 0, then it is equivalent to 'true'
        // meaning, x can be any value. Not only 1 || 0
        std::cout << "X is some integer that's not zero" << std::endl;
}