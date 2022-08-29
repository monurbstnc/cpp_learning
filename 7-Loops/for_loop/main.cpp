#include <iostream>
int main()
{
    //size_t : representation of unsigned int type
    //represents sizes of smthng . For ex : number of student
    /*
    for (unsigned int i {0}; i< 10000 ; i++ )
    {
        std::cout<< i <<". Test.."<<std::endl; 
    }
    std::cout<<"Loop done !" <<std::endl;
    */

    //Use size_t : a representation of some unsigned int for positive numbers [sizes]

   /*
   for (size_t i {0}; i <10; i++)
   {
    std::cout<<i<<". Test"<<std::endl;
   }
   std::cout<<"Loop done !" <<std::endl;
   */

    std::cout<<"sizeof(size_t) : "<<sizeof(size_t)<<std::endl;

    
    
    /*
    //Scope of the iterator
    for (size_t i {0}; i <10; i++)
    {
    std::cout<<i<<". Test"<<std::endl;
    }
    std::cout<<"Loop done !" <<std::endl;
    // std::cout<<"i value : "<<i<<std::endl; Compile error : i is not in scope
    */


    /*   
   //Iterator declared outside the loop
    size_t i{0};

    for (i; i <10; i++)
    {
    std::cout<<i<<". Test"<<std::endl;
    }
    std::cout<<"Loop done ! "<<std::endl;
    std::cout<<"i : "<<i<<std::endl; // we can use outside the for scope

    */

   //Dont hard code values:
   //ıt is recommended to use like below.

    const size_t COUNT{10};

    for(size_t i {0}; i<COUNT;++i)
    {
        std::cout<<i<<". Test "<<std::endl;

    }


    return 0;
}

