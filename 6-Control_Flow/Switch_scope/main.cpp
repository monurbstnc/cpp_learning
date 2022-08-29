#include <iostream>
int main()
{
    int condition {0};
    switch (condition)
    {
        int x;
    case 0:
        int y;
        
        //z =6; can not use before declaration
        std::cout<<"x : "<<x<<std::endl;
        std::cout<<"Statement-0"<<std::endl;
        break;
    case 1:
        int z;
        y=5;
        std::cout<<"y :"<<y<<std::endl;
        std::cout<<"Statement-1"<<std::endl;
        break;
           
    default:
        int u;
        z=10;
        std::cout<<"Default case "<<std::endl;
        break;
    }
    std::cout<<"Moving out"<<std::endl;
    return 0;
}

