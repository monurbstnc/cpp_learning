#include <iostream>
int main()
{
    /*
    int value1 {10};
    int value2 {-300};

    std::cout << "value1 : " << value1 << std::endl;
    std::cout << "value2 : " << value2 << std::endl;
    std::cout << "sizeof(value1): " << sizeof(value1) << " byte" << std::endl;
    std::cout << "sizeof(value2): " << sizeof(value2) << " byte" <<std::endl;

    unsigned int value3 {5};
    // unsigned int value3 {-5}; cause error. Cause -5 has sign.
    signed int value4 {-8};

    std::cout << "value3 : " << value3 << std::endl;
    std::cout << "value4 : " << value4 << std::endl;
    std::cout << "sizeof(value3): " << sizeof(value3) << " byte" << std::endl;
    std::cout << "sizeof(value4): " << sizeof(value4) << " byte" <<std::endl;
    */
    // short and long
    
    short short_var {-32768} ; //  2 Bytes 
    short int short_int {455} ; // 2 Bytes 
    signed short signed_short {122}; // 2 Bytes 
    signed short int signed_short_int {-456}; // 2 Bytes 
    unsigned short int unsigned_short_int {456}; // 2 Bytes 
    
    std::cout << "Short variable : " << short_var<<  " , size : " << sizeof (short_var) << " bytes" << std::endl;
    std::cout << "Short int variable : " << short_int<<  " , size : " << sizeof (short_int) << " bytes" << std::endl;
    


    long long_var {88}; // 4 OR 8 Bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int{44};

    std::cout << "Long variable : " << long_var<<  " , size : " << sizeof (long_var) << " bytes" << std::endl;
    std::cout << "Long int variable : " << long_int<<  " , size : " << sizeof (long_int) << " bytes" << std::endl;
    std::cout << "Signed long variable : " << signed_long<<  " , size : " << sizeof (signed_long) << " bytes" << std::endl;
    std::cout << "Signed long int variable : " << signed_long_int<<  " , size : " << sizeof (signed_long_int) << " bytes" << std::endl;
return 0;
}

