#include <iostream>
#include<iomanip>
#include<bitset>
int main()
{
    /*
    Highlight position for bit of interest with a 1
    Mask other positions with 0
    */
   const int COLUMN_WIDTH {20};
   const unsigned char mask_bit_0 {0b00000001}; // Bit 0 Mask
   const unsigned char mask_bit_1 {0b00000010}; // Bit 1 Mask
   const unsigned char mask_bit_2 {0b00000100}; // Bit 2 Mask
   const unsigned char mask_bit_3 {0b00001000}; // Bit 3 Mask
   const unsigned char mask_bit_4 {0b00010000}; // Bit 4 Mask
   const unsigned char mask_bit_5 {0b00100000}; // Bit 5 Mask
   const unsigned char mask_bit_6 {0b01000000}; // Bit 6 Mask
   const unsigned char mask_bit_7 {0b10000000}; // Bit 7 Mask

   unsigned char var {0b00000000}; // Starts off all bits of (initial value)
   std::cout<<std::setw(COLUMN_WIDTH)<<" var : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(var)<<std::endl;

   //Set a few bits: make them 1's regardless of what's in there

   //SETTING BITS
   //Setting : |= with mask of the bit  
   //Set bit 1
    std::cout << "Setting bit in position 1 "<<std::endl;
    var |= mask_bit_1;
    std::cout<<std::setw(COLUMN_WIDTH)<<" var : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(var)<<std::endl;
    //Set bit 5
    std::cout << "Setting bit in position 5 "<<std::endl;
    var |= mask_bit_5;
    std::cout<<std::setw(COLUMN_WIDTH)<<" var : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(var)<<std::endl;

    // RESETTING BITS : set to 0
    //Resetting : &=(~mask)
    //Reset bit 1
    var &=(~mask_bit_1); // = Mask before  : 0b00000010   Mask now : 0b11111101
    std::cout<<"---Resetting bit in position 1 ---"<<std::endl;
    std::cout <<std::setw(COLUMN_WIDTH)<<" var : "<<std::setw(COLUMN_WIDTH)<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(var)<<std::endl;
    //Reset bit 5
    var &=(~mask_bit_5); // = Mask before  : 0b00100000   Mask now : 0b11011111
    std::cout<<"---Resetting bit in position 1 ---"<<std::endl;
    std::cout <<std::setw(COLUMN_WIDTH)<<" var : "<<std::setw(COLUMN_WIDTH)<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(var)<<std::endl;
    
    //Set all bits 1 (true)
    std::cout<<"Setting all bits :"<<std::endl;
    var |=(mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
    std::cout<<std::setw(COLUMN_WIDTH)<<" var : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(var)<<std::endl;
    
    std::cout<<"---Resetting bit in position 0,2,4,6 ---"<<std::endl;
    var &=~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
    std::cout <<std::setw(COLUMN_WIDTH)<<" var : "<<std::setw(COLUMN_WIDTH)<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(var)<<std::endl;
    //Chech state of a bit
    std::cout<<std::endl;
    std::cout<<"Checking the state of each bit position (on/off)"<<std::endl;
    std::cout<<"bit0 is "<<((var & mask_bit_0) >> 0)<<std::endl; // >>0 means 0. index
    std::cout<<"bit1 is "<<((var & mask_bit_1) >> 1)<<std::endl; // >>1 means 1. index
    std::cout<<"bit2 is "<<((var & mask_bit_2) >> 2)<<std::endl; // >>2 means 2. index
    std::cout<<"bit3 is "<<((var & mask_bit_3) >> 3)<<std::endl; // >>3 means 3. index
    std::cout<<"bit4 is "<<((var & mask_bit_4) >> 4)<<std::endl;
    std::cout<<"bit5 is "<<((var & mask_bit_4) >> 5)<<std::endl;
    std::cout<<"bit6 is "<<((var & mask_bit_4) >> 6)<<std::endl;
    std::cout<<"bit7 is "<<((var & mask_bit_4) >> 7)<<std::endl;
    std::cout<<std::boolalpha;

    std::cout<<"Checking the state of each bit position (on/off) as TRUE/FALSE"<<std::endl;
    std::cout<<"bit0 is "<<static_cast<bool>((var & mask_bit_0) >> 0)<<std::endl; // >>0 means 0. index
    std::cout<<"bit1 is "<<static_cast<bool>((var & mask_bit_1) >> 1)<<std::endl; // >>1 means 1. index
    std::cout<<"bit2 is "<<static_cast<bool>((var & mask_bit_2) >> 2)<<std::endl; // >>2 means 2. index
    std::cout<<"bit3 is "<<static_cast<bool>((var & mask_bit_3) >> 3)<<std::endl; // >>3 means 3. index
    std::cout<<"bit4 is "<<static_cast<bool>((var & mask_bit_4) >> 4)<<std::endl;
    std::cout<<"bit5 is "<<static_cast<bool>((var & mask_bit_4) >> 5)<<std::endl;
    std::cout<<"bit6 is "<<static_cast<bool>((var & mask_bit_4) >> 6)<<std::endl;
    std::cout<<"bit7 is "<<static_cast<bool>((var & mask_bit_4) >> 7)<<std::endl;

    //TOGGLİNG BİTS
    //Toggle bit 0
    std::cout<<std::endl;
    std::cout<<"Before Toggling value: "<<std::bitset<8>(var)<<std::endl;
    std::cout<<"---Toggle bit 0 ---"<<std::endl;
    var ^= mask_bit_0;
    //  1010 1010 
    //      XOR 
    //  0000 0001 
    //= 10101011
    //Toggled 0th bit 0->1
    std::cout<<std::setw(COLUMN_WIDTH)<<" var : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(var)<<std::endl;

    std::cout<<std::endl;
    std::cout<<"Before Toggling value: "<<std::bitset<8>(var)<<std::endl;
    std::cout<<"---Toggle bit 7 ---"<<std::endl;
    var ^= mask_bit_7;
    //  1010 1011
    //    XOR
    //  1000 0000
    //  0010 1011 
    //Toggled 7th bit 1->0
    std::cout<<std::setw(COLUMN_WIDTH)<<" var : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(var)<<std::endl;

    std::cout<<"---------------------"<<std::endl;
    std::cout<<"Before Toggling value: "<<std::bitset<8>(var)<<std::endl;
    std::cout<<"*-*Toggling multiple bits (0-1-2-7)*-*"<<std::endl;
    var ^= (mask_bit_7 | mask_bit_0 | mask_bit_1 | mask_bit_2);
    std::cout<<std::setw(COLUMN_WIDTH)<<" var : "<<std::setw(COLUMN_WIDTH)<<std::bitset<8>(var)<<std::endl;

    return 0;
}

