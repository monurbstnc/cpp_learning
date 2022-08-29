
#include <iostream>
int main()
{
    constexpr bool condition {false};
    if constexpr (condition)
    {
        std::cout<<"The condition is true . " <<std::endl;
    }
    else
    {
        std::cout<<"The condition is false ."<<std::endl;
    }
    

    return 0;
}

