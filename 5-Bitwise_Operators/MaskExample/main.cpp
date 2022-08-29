#include <iostream>
#include<iomanip>
#include<bitset>
const int COLUMN_WIDTH {20};
const unsigned char mask_bit_0 {0b00000001}; // Bit 0 Mask
const unsigned char mask_bit_1 {0b00000010}; // Bit 1 Mask
const unsigned char mask_bit_2 {0b00000100}; // Bit 2 Mask
const unsigned char mask_bit_3 {0b00001000}; // Bit 3 Mask
const unsigned char mask_bit_4 {0b00010000}; // Bit 4 Mask
const unsigned char mask_bit_5 {0b00100000}; // Bit 5 Mask
const unsigned char mask_bit_6 {0b01000000}; // Bit 6 Mask
const unsigned char mask_bit_7 {0b10000000}; // Bit 7 Mask

const unsigned int red_mask   {0xFF000000};
const unsigned int green_mask {0x00FF0000};
const unsigned int blue_mask  {0x0000FF00};
const unsigned int alpha_mask {0x000000FF};

unsigned int my_color   {0xAABCDE00};


void use_options_v0 (bool flag0, bool flag1, bool flag2, bool flag3, bool flag4, bool flag5, bool flag6, bool flag7)
{
    std::cout<<"Flag 0 is : "<<flag0<<std::endl;
    std::cout<<"Flag 1 is : "<<flag1<<std::endl;
    std::cout<<"Flag 2 is : "<<flag2<<std::endl;
    std::cout<<"Flag 3 is : "<<flag3<<std::endl;
    std::cout<<"Flag 4 is : "<<flag4<<std::endl;
    std::cout<<"Flag 5 is : "<<flag5<<std::endl;
    std::cout<<"Flag 6 is : "<<flag6<<std::endl;
    std::cout<<"Flag 7 is : "<<flag7<<std::endl;
}

void use_options_v1 (unsigned char flags)
{
    std::cout<<"Flag 0 is : "<<((flags & mask_bit_0)>>0)<<std::endl;
    std::cout<<"Flag 1 is : "<<((flags & mask_bit_1)>>1)<<std::endl;
    std::cout<<"Flag 2 is : "<<((flags & mask_bit_2)>>2)<<std::endl;
    std::cout<<"Flag 3 is : "<<((flags & mask_bit_3)>>3)<<std::endl;
    std::cout<<"Flag 4 is : "<<((flags & mask_bit_4)>>4)<<std::endl;
    std::cout<<"Flag 5 is : "<<((flags & mask_bit_5)>>5)<<std::endl;
    std::cout<<"Flag 6 is : "<<((flags & mask_bit_6)>>6)<<std::endl;
    std::cout<<"Flag 7 is : "<<((flags & mask_bit_7)>>7)<<std::endl;
}
int main()
{
    //use_options_v0(0,1,1,1,0,1,0,1);
    use_options_v1(mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_7);

    //std::cout<<std::<<std::showbase<<std::endl;

    std::cout<< "Red is : "<<std::bitset<8>((my_color & red_mask)>>24)<<std::endl;
    std::cout<< "Green is : "<<std::bitset<8>((my_color & green_mask)>>16)<<std::endl;
    std::cout<< "Blue is : "<<std::bitset<8>((my_color & blue_mask)>>8)<<std::endl;
    std::cout<< "Alpha is : "<<std::bitset<8>((my_color & alpha_mask)>>0)<<std::endl;
return 0;
}

