#include <iostream>
#include "utils.h"

int main() {
    int a = 5, b = 2;
    
    std::cout << "Sum: " << plus(a, b) << std::endl;
    std::cout << "Diff: " << minus(a, b) << std::endl;
    std::cout << "Mult: " << times(a, b) << std::endl;

    return 0;
}