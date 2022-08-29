#include <iostream>
int main()
{
    // Anything different 0 , is true
    int condition {-5};
    bool bool_condition = condition;
     std::cout<<std::boolalpha;
    std::cout<<"item count :"<<bool_condition<<std::endl;
    //if it is 0 the result is gonna be false
    if(bool_condition) // it is true cause item_count is -3
    {
        std::cout<<"We have "<<bool_condition<<" in condition "<<std::endl;

    }
    else
    {
        std::cout<<"We have "<<bool_condition<<" in condition "<<std::endl;
    }
    

    return 0;
}

