#include <iostream>

int add(int a, int b)
{
    // addition operator
    return a + b;
}

int difference(int a, int b)
{
    // subtract operator
    return a - b;
}

int product(int a, int b)
{
    // multiplication operator
    return a * b;
}

float quotient(int a, int b)
{
    // division operator
    // You could to the simple thing below

    /* return float(a) / float(b); */

    // or, be smart and optimize it, like this:
    if (b == 0)
    {
        throw std::invalid_argument("Division by zero");
    } // assuming b is not 0. We'll get to exception handling soon :)

    static const float reciprocal_b = 1.0f / b;
    return a * reciprocal_b;

    /*
     * static const makes sure that reciprocal_b is calculated only once,
     * even if the function is called multiple times with the same value of b
     * And, multiplication is slightly faster than division
     */
}

int remainder(int a, int b)
{
    // modulus operator
    return a % b;
}

void increment(int &x)
{
    // increment operator
    // passing by reference. Much more simpler than in C
    // How it works: increment(x) => x++ => x = x + 1
    x++;
}

void decrement(int &x)
{
    // decrement operator
    // How it works: decrement(x) => x-- => x = x - 1
    x--;
}

int main()
{
    std::cout << quotient(142, 9) << std::endl;

    int a = 10;
    increment(a);
    std::cout << a << std::endl;

    decrement(a);
    std::cout << a << std::endl;

    return 0;
}