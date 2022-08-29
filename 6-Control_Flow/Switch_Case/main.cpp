#include <iostream>
//Tools 
const int Pen{10};
const int Marker {20};
const int Eraser {30};
const int Rectangle {40};
const int Circle {50};
const int Ellipse {60};

int main()
{
    int tool {Marker};

    switch (tool) 
    {
       /* case Pen :
        {
            std::cout<<"Active tool is Pen . "<<std::endl;
        }
        break; // must type break otherwise it prints till break

        case Marker :
        {
            std::cout<<"Active tool is Marker . "<<std::endl;
        }
        break;
        */
        // Group the cases.
        case Pen : // Condition could be integral types and enums enums will discuss later
        case Marker :
        {
            std::cout<<"Drawing Shapes "<<std::endl;
        }
        break;
        case Eraser :
        {
            std::cout<<"Active tool is Eraser . "<<std::endl;
        }
        break;
        case Rectangle :
        {
            std::cout<<"Active tool is Rectangle . "<<std::endl;
        }
        break;
        case Circle :
        {
            std::cout<<"Active tool is Circle . "<<std::endl;
        }
        break;
        case Ellipse :
        {
            std::cout<<"Active tool is Ellipse . "<<std::endl;
        }
        break;
    
    default: //When none of the cases executed 
    {
        std::cout<<"No match found .."<<std::endl;
    }
        break;
    }

    std::cout<<"After that program goes here ....."<<std::endl;

return 0;
}

