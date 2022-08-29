#include <iostream>
int main()
{
//constexpr : Constant that may be evaluated at compile time or run time
//Constant expressions are also constants, so you cant reassign values to them
    constexpr int SOME_LIB_MAJOR_VERSİON {1237};
    constexpr int eye_count {3};//constexpr is known at compile time 
    constexpr double PI {3.14};
    //that can be evaluated on compile time .
    std::cout <<"eye count : "<<eye_count<<std::endl;
    std::cout<<"PI : "<<PI<<std::endl;

   // int leg_count {2};//Non constexpr
    //leg_count is not known at compile time
    //constexpr int arm_count{leg_count}; // Error

    constexpr int room_count {10};
    constexpr int door_count {room_count};

    const int table_count{5};
    constexpr int chair_count{table_count}; // Works

    
    static_assert(SOME_LIB_MAJOR_VERSİON == 1237); // We can check the code version if it is not true code is not gonna work.
    //The variable in static assert has to be constexpr not int or etc.
    
    std::cout<<"App doing this thing ..."<<std::endl;
    return 0;
}

