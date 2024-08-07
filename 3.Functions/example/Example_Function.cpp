#include <iostream>

// Example of a function prototype, needed (to inform compiler) for definition of the functions after main()

int multiplyNumbers(int a, int); // this is still valid, for prototype

int addNumbers(int a, int b) {
    // ugly, but lengthy way of returning a sum.
    // There exist the concept of inline functions as well.
    int sum = a + b;
    return sum;
}

int main() {
    std::cout << multiplyNumbers(12, 5) << std::endl;

}

int multiplyNumbers(int a, int b) {
    return a * b;
}