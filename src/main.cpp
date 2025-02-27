#include <iostream>
#include "utils.h"

int main() {
    int a, b;
    
    std::cout << "Checkout our new features! Now you can do math" << std::endl;
    std::cout << "Enter two numbers" << std::endl;
    std::cin >> a >> b;
    std::cout << "Sum: " << plus(a, b) << std::endl;
    std::cout << "Diff: " << minus(a, b) << std::endl;
    std::cout << "Mult: " << times(a, b) << std::endl;

    return 0;
}