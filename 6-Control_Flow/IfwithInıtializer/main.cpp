#include <iostream>
int main()
{
    /*
    int speed {10};
    bool go {false};

    if (go)
    {
        std::cout<<"speed : "<<speed<<std::endl;
        if(speed >5)
        {
            std::cout<<"Slow down!"<<std::endl;
        }else
        {
            std::cout<<"All good !"<<std::endl;
        }
            
    }
    else
    {
        std::cout<<"speed : "<<speed<<std::endl;
        std::cout<<"Stop !"<<std::endl;
    }

    
    std::cout <<"Out of the if block, speed : "<<speed<<std::endl;
    // Because we declare speed out of the if block we can use out of if block.
    */

    bool go {false};
    if (int speed {15}; go)
    {
        std::cout<<"speed : "<<speed<<std::endl;
        if(speed > 5)
        {
            std::cout<<"Slow down!"<<std::endl;
        }
        else{
            std::cout<<"All good !"<<std::endl;
        }

    }
    else
    {
        std::cout<<"speed : "<<speed<<std::endl;
        std::cout<<"Stop "<<std::endl;
    }

    //std::cout<<"Out of the block , speed : "<<speed<<std::endl; //cant use speed out of if block
    
    return 0;
}

