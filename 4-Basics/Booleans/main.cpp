#include <iostream>
int main()
{

    bool red_light {false};
    bool green_light {false};

    if (red_light == true)
    {
        std::cout << "Stop !" << std::endl;
    }

    else{
        std::cout << "Go through !" << std::endl;

    }

    if (green_light)
    {
        std::cout << "The light is green!" << std::endl;
        
    }
    else 
    {
        std::cout << "The light is not green !" << std::endl;

    }
    //Size of a bool is 1 byte 8 bit
    std::cout << "Size of a boolean : " <<sizeof(bool) << std::endl;

//Printing out a bool
//1 -> True
//0 -> False
std::cout <<"red light : " << red_light << std::endl;
std::cout << "green light : " << green_light <<std::endl;
std::cout << std::boolalpha; // print true or false not 0 and 1
std::cout <<"red light : " << red_light << std::endl;
std::cout << "green light : " << green_light <<std::endl;

return 0;

}

