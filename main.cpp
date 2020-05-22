#include <iostream>
#include "STack.h"

int main() {

    Stack<int> test_stack;

    for(int x =0;x<10;x++)
        test_stack.push(x);
    std::cout << test_stack.length()<< std::endl;
    for(int x=0;x<10;x++)
        std::cout <<test_stack.pop()<< std::endl;

    std::cout << test_stack.empty() << std::endl;
    return 0;
}
