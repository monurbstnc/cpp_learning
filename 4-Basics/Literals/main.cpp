#include <iostream>
int main()
{
    // Literals 
    //Literal types : u and 1 combinations for unsigned and long.
    unsigned char unsigned_char {53u};

    //2 Bytes
    short short_var {-32768};
    short int short_int {455};
    //Grouping Numbers: C++14 and onwards
    unsigned int prize {1'500'00'0u};
    std::cout<<"The prize is : " <<prize <<std::endl;
    

    //Narrowing Errors
    /*
    unsigned char distance { 555u}; //Error [0-255] but it is 555
    unsigned int game_score {-20};// Error cause it has sign
    */
   unsigned int game_score (-20);
   std::cout<<"game_score : "<<game_score<<std::endl; // Some junk variable 
   //Representing colors with hex
   int black_color {0xffffff};
   std::cout << "Black color is : " <<black_color<<std::endl;

   unsigned int hex_number{0x22BU}; // Dec 555
   int hex_number2 {0x400}; // Dec 1024

   std::cout<<std::hex<<"The hex number is : "<<hex_number<<std::endl;
   std::cout<<std::dec<<"The hex number2 is : "<<hex_number2<<std::endl;

   
   return 0;
}

