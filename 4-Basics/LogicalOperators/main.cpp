#include <iostream>
int main()
{
    // And Operation
    //   a              b           a && b
    //  false          false        false
    //  false          true         false
    //  true           false        false
    //  true           true         true 

    // OR Operation 
    //  a               b               a || b

    //  false           false           false
    //  false           true            true
    //  true            false           true
    //  true            true            true
    bool a {true};
    bool b {false};
    bool c {true};

    std::cout<<std::boolalpha;
    std::cout << " a : " << a << std::endl;
    std::cout << " b : " << b << std::endl;
    std::cout << " c : " << c << std::endl;

    std::cout << "-----------------"<< std::endl;
    std::cout << "a && b : " << (a && b) << std::endl;
    std::cout << "a && c : " << (a && c) << std::endl;
    std::cout << "a && b && c : " << (a && b && c) << std::endl;
    

    return 0;
}

