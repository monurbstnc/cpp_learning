#include <iostream>
int main()
{
    //constinit says that a variable should be initialized at compile time. It's a new C++20 keyword
    //If you try to initialize with something that can't be evaluated at compile time, you ll get a compile error
    //We say that the variable should be const initialized
    //constinit can only be applied to variables with static or thread storage duration. 

    return 0;
}

