#include <iostream>
#include "STack.h"

int main() {

    Stack<int> test_stack;
    Stack<int> test2;
    test2.push(10);

    for(int x =0;x<10;x++)
        test_stack.push(x);
    std::cout << test_stack.length()<<","<<test_stack.empty()<< std::endl;

    for(int x=0;x<10;x++)
        std::cout <<test_stack.pop()<< std::endl;
    test_stack = test2;
    test_stack.pop();
    test_stack.pop();
    std::cout << test_stack.empty() << std::endl;
    return 0;
}
