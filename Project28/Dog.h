#pragma once
const int STACK_SIZE{ 10 };
class Stack
{
public:
    int container[STACK_SIZE]{};
    int topIndex = -1;
    enum Command
    {
        PUSH = 1,
        POP = 2
    };
    void PrintInfo();
    void PrintStack();
    void Push(int value);
    void Pop();
    void ProcessUserInput();
 

};

