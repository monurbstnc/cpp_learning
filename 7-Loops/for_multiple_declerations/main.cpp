#include<iostream>

int main() {
    for(size_t i {0}, x {5},y {22}; y>15 ; i++,x+=5, y--)
    {
        std::cout<<"The value of i : "<<i<<std::endl;
        std::cout<<"The value of x : "<<x<<std::endl;
        std::cout<<"The value of y : "<<y<<std::endl;
    }


    return 0;
}