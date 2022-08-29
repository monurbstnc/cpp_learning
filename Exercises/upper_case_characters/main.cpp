#include <iostream>
#include <cctype>
int main()
{
    for(unsigned char i {65}; i<91; i++)
    {
        std::cout<<"Lower Case ---"<<i<<std::endl;
        
        //char upper = toupper(i);
        //std::cout<<upper<<std::endl;

    }

    return 0;
}

