#include <iostream>
#include "stack.h"

int main(int, char **)
{
    int nums[] = {1, 2, 3, 4, 5};
    try
    {
        Stack<int> stack(5);
        std::cout << "Size: " << stack.size() << std::endl;
        std::cout << "Empty: " << stack.isEmpty() << std::endl;
        for (auto &i : nums)
        {
            stack.push(i);
        }

        std::cout << "Full: " << stack.isFull() << std::endl;

        while (!stack.isEmpty())
        {
            std::cout << "Popped: " << stack.pop() << std::endl;
        }
        std::cout << "Empty: " << stack.isEmpty() << std::endl;
        stack.pop(); //testing exception
    }
    catch (StackException &e)
    {
        std::cout << "Stack error: " << e.what() << std::endl;
    }
}
