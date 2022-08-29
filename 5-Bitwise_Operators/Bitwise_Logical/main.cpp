#include <iostream>
#include<iomanip>
#include<bitset>
int main()
{
// TABLE OF LOGİCAL BİTWİSE OPERATORS
/*
    a       b       a&b     a|b     ~a      a^b
    0       0       0       0       1        0
    0       1       0       1       1        1  
    1       0       0       1       0        1  
    1       1       1       1       0        0

*/
    int COLUMN_WIDTH {20};
    unsigned char value1 {0x3}; // 0000 0011
    unsigned char value2 {0x5}; // 0000 0101
    std::cout<<std::setw(COLUMN_WIDTH)<<"value1 :"
    <<std::setw(COLUMN_WIDTH)<<std::bitset<8>(value1)<<std::endl;
    std::cout<<std::setw(COLUMN_WIDTH)<<"value2 :"
    <<std::setw(COLUMN_WIDTH)<<std::bitset<8>(value2)<<std::endl;


    //AND OPERATOR
    std::cout<<std::endl;
    std::cout<<"Bitwise AND : " <<std::endl;
    std::cout<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(value1 & value2)<<std::endl;
    //AND The values bit by bit

    //OR bit by bit
    std::cout<<std::endl;
    std::cout<<"Bitwise OR : "<<std::endl;
    std::cout<<std::setw(COLUMN_WIDTH)<<"value1 | value2 : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(value1 | value2)<<std::endl;
    //Bit by Bit NOT
    std::cout<<std::setw(COLUMN_WIDTH)<<"~value1 : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(~value1)<<std::endl; 
    std::cout<<std::setw(COLUMN_WIDTH)<<"~value2 : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(~value2)<<std::endl;

    std::cout<<std::setw(COLUMN_WIDTH)<<"~10010001: "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(~0b10010001)<<std::endl;

    std::cout<<std::setw(COLUMN_WIDTH)<<"~01011001 : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(~0x59)<<std::endl;
    //hex literal

    //XOR
    std::cout<<std::setw(COLUMN_WIDTH)<<"value1 :"
    <<std::setw(COLUMN_WIDTH)<<std::bitset<8>(value1)<<std::endl;
    std::cout<<std::setw(COLUMN_WIDTH)<<"value2 :"
    <<std::setw(COLUMN_WIDTH)<<std::bitset<8>(value2)<<std::endl;
     std::cout<<std::setw(COLUMN_WIDTH)<<"value1 ^ value2 : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(value1 ^ value2)<<std::endl;

    return 0;
}

