#include <iostream>
    //ELSE - IF TOOLS
    const int Pen {10};
    const int Marker {20};
    const int Eraser {30};
    const int Rectangle {40};
    const int Circle {50};
    const int Ellipse {60};

int main()
{
    int number1 {55};
    int number2 {65};
    bool result = (number1<number2); // True dondurur.
    /*
    std::cout<<std::boolalpha<<"result : "<<result<<std::endl; // boolalpha: turns 1 to true 0 to false

    std::cout<<"**--IF STATEMENTS--**"<<std::endl;

    if (result) // result is true or we can use if(result ==  true)
    {
        std::cout<<number1<<" less than " <<number2<<std::endl;

    }
    if(!result) // result is false or we can use if (!(result == true))
    {
        std::cout<<number1<<" greater than "<<number2<<std::endl;

    }
    */


    //Using else

    /*
    std::cout<<"**--IF and ELSE --**"<<std::endl;
    if (result) // result is true or we can use if(result ==  true)
    {
        std::cout<<number1<<" less than " <<number2<<std::endl;

    }
    else // ıf statement  is not true than else gonna work
    {
        std::cout<<number1<<" greater than "<<number2<<std::endl;

    }
    */

    //Nested if statements
    //std::cout<<":: Nesting if statements :: "<<std::endl;
    bool green = true;
    bool red {false};
    bool yellow {false};
    bool police_stop {true};

    /*

    if red : stop
    if yellow : stop
    if police_stop : stop
    if green : go


    */

   /*
   if (red)
   {
    std::cout<<"STOP! "<<std::endl;
   }
   if (yellow)
   {
    std::cout<<"STOP! "<<std::endl;
   }
   if(police_stop)
   {
    std::cout<<"STOP! "<<std::endl;
   }
   if (green)
   {
    std::cout<<"GO! "<<std::endl;
   }
   */

  /*

  std::cout <<"**Police stop (verbose)**"<<std::endl; //verbose means in detail

  if(green)
  {
    if(police_stop)
    {
        std::cout<<"STOP! "<<std::endl;
    }
    else
    {
        std::cout<<"GO !"<<std::endl;
    }


  }
  */

//ELSE - IF 
    std::cout<<"***ELSE-IF***"<<std::endl;
    int tool {Eraser};

    if(tool = Pen)
    {
        std::cout<<"Active tool is Pen ... "<<std::endl;
    }
    else if (tool = Marker)
    {
        std::cout<<"Active tool is Marker... "<<std::endl;
    }
    else if (tool = Eraser)
    {
        std::cout<<"Active tool is Eraser... "<<std::endl;
    }
    else if (tool = Rectangle)
    {
        std::cout<<"Active tool is Rectangle... "<<std::endl;
    }   
    else if (tool = Circle)
    {
        std::cout<<"Active tool is Circle... "<<std::endl;
    }
    else if (tool = Ellipse)
    {
        std::cout<<"Active tool is Ellipse... "<<std::endl;
    }

    std::cout<<"After else-if code goes here.."<<std::endl;


    return 0;



}

