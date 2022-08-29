#include <iostream>
#include<iomanip>
#include<bitset>

int main()
{
    /*
     operator&= AND
     operator|= OR
     operator^= XOR
     operator~ NOT
    */
    const int COLUMN_WIDTH {20};
    unsigned char sandbox_var{0b00110100};
    std::cout<<std::endl;
    std::cout<<"Compound bitwise assignment operators " << std::endl; // 8 Bits : positive numbers only
    //Print out initial value
    std::cout<<std::endl;
    std::cout<<std::setw(COLUMN_WIDTH)<<"İnitial value : """<<std::endl;
    std::cout<<std::setw(COLUMN_WIDTH)<<"sandbox_var : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(sandbox_var)<<std::endl;

    //Compound left shift
    std::cout<<"Shift left 2 bit positions in place : "<<std::endl;
    sandbox_var<<=2;
    std::cout<<std::setw(COLUMN_WIDTH)<<"sandbox_var : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(sandbox_var)<<std::endl;
    std::cout<<"Shift right 4 bit positions in place : "<<std::endl;
    sandbox_var>>=4;
    std::cout<<std::setw(COLUMN_WIDTH)<<"sandbox_var : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(sandbox_var)<<std::endl;
    //OR operation
    sandbox_var |=0b00001111;
    std::cout<<"OR with 0b00001111  : "<<std::endl;
    std::cout<<std::setw(COLUMN_WIDTH)<<"sandbox_var : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(sandbox_var)<<std::endl;

    //Compound AND with 0000 1100 to turn of the 2 lowest bits
    std::cout<<"sandbox_var : "<<std::setw(COLUMN_WIDTH+6)<<std::bitset<8>(sandbox_var)<<std::endl<<"Compound AND with 0000 1100 : "<<std::endl;
    sandbox_var &=0b00000000;
    
    std::cout<<std::setw(COLUMN_WIDTH)<<"sandbox_var : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(sandbox_var)<<std::endl;
    

  

    
    return 0;
}

