#include <iostream>
int main()
{
    const int age {34};
    const float height {1.67f};
    //age = 55;
    //cant change const variables.
     
    //But can change via another variable
    int years {3*age};
    std::cout<<"age : "<<age<<std::endl;
    std::cout<<"height : "<<height<<std::endl;
    std::cout<<"years : "<<years<<std::endl;
    return 0;

}

