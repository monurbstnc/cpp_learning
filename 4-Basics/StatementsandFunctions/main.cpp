#include <iostream>
int add_number(int first_param, int second_param)
{

    int result = first_param+second_param;
    return result;
}
int main()
{
    int first_number = 32; //Statement
    int second_number = 24;
    std::cout <<"First number : " << first_number << std::endl;
    std::cout <<"Second number : "<<second_number <<std::endl;
   

    int sum = first_number + second_number;
    std::cout <<"Sum : "<< sum <<std::endl;//56
    sum = add_number(25,7);
    std::cout <<"Sum : "<< sum <<std::endl; // 32
    std::cout <<"Sum : " << add_number(88,74) << std::endl;

  
return 0;

}

