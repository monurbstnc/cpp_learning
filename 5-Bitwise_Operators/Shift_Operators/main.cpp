#include <iostream>
#include<bitset>
#include<chrono>
#include<thread>

int main()
{
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds
    //Bit shifting is only supported for integral types
    //like int and char..

    //Shifting right divides by 2^n
    //Shifting left multiplies by 2^n
    //This rule breaks if you throw off 1's
    //either to the rigt or the left
    unsigned short int value {0xff0u};
    std::cout<<"Size of short int: " <<sizeof(value)<<std::endl; 
    std::cout<<"value : " <<std::bitset<16>(value)<<" dec : "<<value<<std::endl;
    /*
    value = static_cast<unsigned short int>(value << 1); // multiplies with 2 shift right.
    std::cout<<"Size of short int: " <<sizeof(value)<<std::endl; 
    std::cout<<"value : " <<std::bitset<16>(value)<<" dec : "<<value<<std::endl;
    */
    
    /*
    value = static_cast<unsigned short int>(value >> 5); //divided by 2^5 shift left.
    std::cout<<"Size of short int: " <<sizeof(value)<<std::endl; 
    std::cout<<"value : " <<std::bitset<16>(value)<<" dec : "<<value<<std::endl;
    */
    value = static_cast<unsigned short int>(value >> 1); //divided by 2 shift left.
    std::cout<<"Size of short int: " <<sizeof(value)<<std::endl; 
    std::cout<<"value : " <<std::bitset<16>(value)<<" dec : "<<value<<std::endl;    
    std::cout<<"Waiting for shifting right ...."<<std::endl;

    sleep_until(system_clock::now()+seconds(10));
   
    value = static_cast<unsigned short int>(value << 1); //multiplied by 2 shift right.
    std::cout<<"Size of short int: " <<sizeof(value)<<std::endl; 
    std::cout<<"value : " <<std::bitset<16>(value)<<" dec : "<<value<<std::endl;
    std::cout<<"Shifting right completed ...."<<std::endl;
    // Easy way
    int a {180};
    std::cout<<"Value : "<< (a << 1)<<std::endl;


    return 0;


}

