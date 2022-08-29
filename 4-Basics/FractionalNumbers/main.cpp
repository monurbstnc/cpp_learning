#include <iostream>
#include <iomanip>
int main()
{
    /*   1.2454654564
        .2454654564 is precision (ondalıklı kısım)
    
        Type -------- Size ------- Precision ---- Comment
        float           4               7
        double          8               15        Recommended
        long double     12              >double
    */ 

    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};
    std::cout << "sizeof number1 float : " << sizeof(number1) << std::endl;
    std::cout << "sizeof number2 double : " << sizeof(number2) << std::endl;
    std::cout << "sizeof number3 long double : " << sizeof(number3) << std::endl;
    std::cout << std::setprecision(20); // default precision is 6 but in this declaration we set 20
    std::cout << "number1 : " << number1 << std::endl; // it outputs random garbage after 7 th precision cause limit is 7.
    std::cout << "number2 : " << number2 << std::endl;// it outputs random garbage after 15 th precision cause limit is 15.
    std::cout << "number3 : " << number3 << std::endl;


   //Float problems : The precision is usually too limited 
   //for a lot of applications

   //float number4 {192400023.0f}; // Error : narrowing conversion after 0s we have junk
   double number4 (192400023.0);
   std::cout << "number 4 : " << number4 << std::endl;

    //scientific notation
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};
    double number8 {3.4987e-11};

    std::cout << "number5 : " << number5 << std::endl; 
    std::cout << "number6 : " << number6 << std::endl;
    std::cout << "number7 : " << number7 << std::endl;
    std::cout << "number8 : " << number8 << std::endl;   

    double number10 {5.6};
    double number11{}; // İnitialize to 0
    double number12{}; // İnitialize to 0

    //Infinity
    double result {number10 / number11};
    std::cout << "number10 : " << number10 << std::endl; 
    std::cout << "result : " << result << std::endl; 



return 0;
}

