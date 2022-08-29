#include <iostream>
int main()
{

//Ternary expression
//result = (condiiton) ? option1:option2; 
// Types must be same or be convertible
//Equivalent of ternary
/*
if(condition)
{
    result = option1;
}
else
{
    result = option2;
}
*/

int max {};
int a {35};
int b {60};
std::cout<<std::endl;
std::cout<<"Using regular if "<<std::endl;

if (a>b)
{
    max = a;
}
else
{
    max = b;
}
std::cout<<"max : "<<max<<std::endl;
std::cout << "Using ternary operator " << std::endl;
max = (a>b)? a: 22.5f;
std::cout<<max<<std::endl;

return 0;
}

