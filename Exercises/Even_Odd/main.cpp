#include <iostream>
bool odd(int number)
{   
    bool odd {false};
    if(number % 2 !=0)
    {
        odd = true;
    }
    return odd;
}
int main()
{
    int number;
    std::cout<<"Enter an integer: "<<std::endl;
    std::cin>>number;
    
    if(odd(number))
    {
        std::cout<<"Number is odd."<<std::endl;
    }
    else
    {
        std::cout<<"Number is even . "<<std::endl;
    }

return 0;
}

