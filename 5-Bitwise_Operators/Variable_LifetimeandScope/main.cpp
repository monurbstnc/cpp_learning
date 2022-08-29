#include <iostream>
/*
int static_var2 {80}; // static duration: dies when program ends

void some_function()
{
    int local_var1{30}; //local (automatic) duration: dies at end of block
    static int static_var1 {40}; //static duration: dies when program ends
    int dynamic_var1 {50}; //You decide when it dies

}
*/

int global_var1 {23}; // available in the global scope of our file

void some_function()
{
    int local_var {10};
    std::cout<<"Inside function global_var : " <<global_var1<<std::endl;
    std::cout<<"Inside function local_var : " << local_var <<std::endl;

}
int main()
{
    /*
        Storage Duration
        local(block,automatic)
        static
        dynamic

    */
  /*
   int local_var2 {10}; // local (automatic) duration : dies at end of block.
   int dynamic_var2 {60}; //you decide when it dies
   
   {
   int local_var3 {20}; //local (automatic) duration : dies at end of block.
   int dynamic_var3{70}; //you decide when it dies
   }


    return 0;
  */  
    std::cout<<"Inside the main function global_var : " <<global_var1<<std::endl;
}

