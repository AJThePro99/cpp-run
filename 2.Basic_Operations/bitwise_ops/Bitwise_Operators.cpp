#include <iostream>

int main() {
    int result = 5 & 3; // Bitwise AND
    std::cout << result << std::endl;
    // result will be 1 (0000 0101 & 0000 0011 = 0000 0001)

    result = 5 | 3; // Bitwise OR operator.
    std::cout << result << std::endl;
    // result will be 7 (0000 0101 | 0000 0011 = 0000 0111)

    result = 5 ^ 3; // Bitwise XOR
    std::cout << result << std::endl;
    // result will be 6 (0000 0101 ^ 0000 0011 = 0000 0110)

    result = ~5; // Bitwise NOT
    std::cout << result << std::endl;
    // result will be -6 (1111 1010)

    result = 5 << 3; // Bitwise left shift [i.e. 5 x (2 ^ 3)]
    std::cout << result << std::endl;
    // result will be 40

    result = 5 >> 3; // Bitwise right shift [i.e. 5 / (2 ^ 3)]
    std::cout << result << std::endl;
    // result will be 0  
}