#include <iostream>
bool a {true};
bool b {true};
bool c {true};
bool d {false};

bool p {false};
bool q {false};
bool r {false};
bool m {true};


bool car()
{
    std::cout<<"car function running.."<<std::endl;
    return true;
}
bool house()
{
    std::cout<<"house function running.."<<std::endl;
    return false;
}
bool job()
{
    std::cout<<"job function running.."<<std::endl;
    return true;
}
bool spouse() // husband or wife
{
    std::cout<<"spouse function running "<<std::endl;
    return true;
}
int main()
{   
    // AND : IF one operands is 0 , the result is 0 so it can be shor circuited.
    std::cout<<"AND Short Circuit"<<std::endl;
    bool result = a && b && c && d; // Here the short circuit doesnt happen.
    //For example if b is false the result is short circuted and after that b program dont work because false & true or false & false 
    // is always false ...
    std::cout<<"The result is : " <<std::boolalpha << result<<std::endl;

    // OR : If one operand is 1, the result is 1.
    std::cout<<std::endl;
    std::cout<<"OR Short Circuit"<<std::endl;
    result = p || q || r || m ;
    /* Here the short circuit doesnt happen .
    But if one of the booleans is true before m , short circuit will happen ..
    */
    std::cout<<"The result is : " <<std::boolalpha << result<<std::endl;

    std::cout<<"***************************///////*********************"<<std::endl;
    if (car() && house()&& job() && spouse())
    {
        std::cout<<"I am happy ."<<std::endl;
    }
    else
    {
        std::cout<<"I am not happy ."<<std::endl;
    }
    return 0;


 
}

