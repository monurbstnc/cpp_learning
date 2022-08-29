#include <iostream>
int main()
{
    bool green{false};
    if (green)
    {
        int car_count {23};
        std::cout<<"Light is green"<<car_count<<"on the move"<<std::endl;
    }
    else
    {
        //car_count++; can not use there because it declared in if scope not elses
        std::cout<<"Light is not green. Cars should STOP!"<<std::endl;
    }

    return 0;
}

