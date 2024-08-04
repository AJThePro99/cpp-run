#include <iostream>
#include <vector>


int main() {
    // Adds support for low and high level programming
    // pointer functionality || Low level

    int number = 42;
    int* ptr_to_number = &number;

    //dereferencing it
    std::cout << "Number is: " << *ptr_to_number << std::endl;


    // High-level programming

    // const to make it clear that we're not changing values in myVector
    // we're taking the values by reference, therefore no copies.
    
    std::vector<int> myVector = {1, 2, 4, 9};
    // using a range based for loop for this one
    for (const auto &i: myVector) {
        std::cout <<i << std::endl;
    }
}