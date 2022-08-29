#include <iostream>
#include <iomanip>
int main()
{
   //std::flush flushes the output buffer to its final destination.
   std::cout<< " Flushes the message ...." << std::endl << std::flush;
    //After std::flush, we re sure that at this line, the message has been
    //sent to stream. This may be important in some application
    //std::setw():Adjust the field with for the item about to be printed.
    //The setw() manipulator only affects the next value to be printed.
    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel " <<" "<< "Gray" <<" 25"<< std::endl;
    std::cout << "Josh " <<" "<< "Carr" <<" 15"<< std::endl;
    std::cout << "Izaiah " <<" "<< "Robinson" <<" 35"<< std::endl;
    std::cout<< std::endl;
    /*
    std::cout << "Formatted Table : " <<std::endl;
    std::cout << std::setw(10)<<"Lastname"<<std::setw(10)<<"Firstname"<<std::setw(5)<<"Age"<<std::endl;
    std::cout << std::setw(10)<<"Jordan"<<std::setw(10)<<"Parker"<<std::setw(5)<<"15"<<std::endl;
    std::cout << std::setw(10)<<"Wheeler"<<std::setw(10)<<"Nancy"<<std::setw(5)<<"24"<<std::endl;
    std::cout << "Formatted table with variables: "<<std::endl;
    int col_width{14};
    std::cout << std::setw(col_width)<<"Lastname"<<std::setw(col_width)<<"Firstname"<<std::setw(col_width)<<"Age"<<std::endl;
    std::cout << std::setw(col_width)<<"Jordan"<<std::setw(col_width)<<"Parker"<<std::setw(col_width)<<"15"<<std::endl;
    std::cout << std::setw(col_width)<<"Wheeler"<<std::setw(col_width)<<"Nancy"<<std::setw(col_width)<<"Age"<<std::endl;
    */

    /*
    //right justified
    std::cout << "Right justified table (default) : "<<std::endl;
    int col_width{20};
    std::cout<<std::right;
    std::cout << std::setw(col_width)<<"Lastname"<<std::setw(col_width)<<"Firstname"<<std::setw(col_width)<<"Age"<<std::endl;
    std::cout << std::setw(col_width)<<"Jordan"<<std::setw(col_width)<<"Parker"<<std::setw(col_width)<<"15"<<std::endl;
    std::cout << std::setw(col_width)<<"Wheeler"<<std::setw(col_width)<<"Nancy"<<std::setw(col_width)<<"Age"<<std::endl;
    //left justified
    std::cout << "Right justified table (default) : "<<std::endl;
    col_width = 21;
    std::cout<<std::left;
    std::cout << std::setw(col_width)<<"Lastname"<<std::setw(col_width)<<"Firstname"<<std::setw(col_width)<<"Age"<<std::endl;
    std::cout << std::setw(col_width)<<"Jordan"<<std::setw(col_width)<<"Parker"<<std::setw(col_width)<<"15"<<std::endl;
    std::cout << std::setw(col_width)<<"Wheeler"<<std::setw(col_width)<<"Nancy"<<std::setw(col_width)<<"Age"<<std::endl;
    */
    
    //Internal justified: sign is left justified, data is right justified.
    std::cout << std::endl;
    std::cout << "Internal Justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;
    /*
    int col_width{20};
    std::cout<<std::left;
    std::cout<<std::setfill('*');
    std::cout << std::setw(col_width)<<"Lastname"<<std::setw(col_width)<<"Firstname"<<std::setw(col_width)<<"Age"<<std::endl;
    std::cout << std::setw(col_width)<<"Jordan"<<std::setw(col_width)<<"Parker"<<std::setw(col_width)<<"15"<<std::endl;
    std::cout << std::setw(col_width)<<"Wheeler"<<std::setw(col_width)<<"Nancy"<<std::setw(col_width)<<"Age"<<std::endl;

    int pos_num {34};
    int neg_num {-47};
    std::cout<<std::showpos;
    std::cout <<"pos_num : " << pos_num << std::endl;
    std::cout<<"neg_num : " <<neg_num << std::endl;

    std::cout<<std::noshowpos;
    std::cout <<"pos_num : "<<pos_num <<std::endl;
    std::cout<<"neg_num : " <<neg_num << std::endl;

    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};

    std::cout << std::endl;
    std::cout << "default base format : " <<std::endl;
    std::cout<<"pos_int : " <<pos_int << std::endl;
    std::cout<<"neg_int : " <<neg_int << std::endl;
    std::cout<<"double_var : " <<double_var << std::endl;
    std::cout<<"**********************"<<std::endl;

    std::cout<<"pos_int different bases: "<< std::endl;
    std::cout<<"pos_int (dec): " <<std::dec<<pos_int << std::endl;
    std::cout<<"pos_int (hex): " <<std::hex<<pos_int << std::endl;
    std::cout<<"pos_int (octal): " <<std::oct<<pos_int << std::endl;
    std::cout<<"**********************"<<std::endl;
    
    std::cout<<"neg_int different bases: "<< std::endl;
    std::cout<<"neg_int (dec): " <<std::dec<<neg_int << std::endl;
    std::cout<<"neg_int (hex): " <<std::hex<<neg_int << std::endl;
    std::cout<<"neg_int (octal): " <<std::oct<<neg_int << std::endl;
    std::cout<<"**********************"<<std::endl;

    std::cout<<"double_var in different bases : " << std::endl;
    std::cout<<"double_var (dec): " <<std::dec<<double_var<< std::endl;
    std::cout<<"double_var (hex): " <<std::hex<<double_var << std::endl;
    std::cout<<"double_var (octal): " <<std::oct<<double_var << std::endl;
    std::cout<<"**********************"<<std::endl;
    */
    double a {3.14575612566321251231};
    double b {2006.0};
    double c {1.34e-10};
   
    std::cout<<"double values (scientific) : "<< std::endl;
    std::cout<<std::scientific;
    std::cout<<"a : " <<a<< std::endl;
    std::cout<<"b : " <<b<< std::endl;
    std::cout<<"c : " <<c<< std::endl;
    std::cout<<"***************************"<<std::endl;
    std::cout<<"double values (back to defaults) : "<< std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); // Hack
    //makes cout print floats with a fixed number of decimals 
    std::cout<<"a : " <<a<< std::endl;
    std::cout<<"b : " <<b<< std::endl;
    std::cout<<"c : " <<c<< std::endl;
    std::cout<<"***************************"<<std::endl;

     //setprecision() : the number of digits printed out for a floating point. Default is 6
    
    a = 3.1415926535897932384626433832795;
    
    std::cout << std::endl;
    std::cout << "a (default precision(6)) : " << a <<  std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)) : " << a << std::endl;
    std::cout <<"************"<<std::endl;
    double d {34.1};
    double e {101.99};
    double f {12.0};
    int    g {45};
    
    std::cout << std::endl;
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12
    std::cout << "g : " << g << std::endl;
    
    std::cout << std::endl;
    std::cout << "showpoint: " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12.0
    std::cout << "g : " << g << std::endl;
    return 0;

}

