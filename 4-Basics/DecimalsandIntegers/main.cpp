#include <iostream>
int main()
{   //Braced Initialization
/*
    //variable may contain random garbage value.
    int elephant_count;
    int lion_count{};//İnitialize to 0.
    int dog_count{10};
    int cat_count{15};

    int domesticated_animals{dog_count+cat_count};
  
    std::cout << "Elephant Count : " << elephant_count << std::endl;
    std::cout << "Lion Count : " << lion_count << std::endl;
    std::cout << "Dog Count : " << dog_count << std::endl;
    std::cout << "Cat Count : " << cat_count << std::endl;
    std::cout << "Domesticated animal cıunt : " << domesticated_animals << std::endl;
  */

  //Functional Initialization
  //Information lost. less safe than braced initializers.
  //---
  //   |
    int narrowing_conversion_functional (2.9);
    // 2.9 is more than 4 bytes it only stores 2

    int apple_count(5);
    int orange_count(10);
    int fruit_count (apple_count+orange_count);

    std::cout << "Apple Count : " << apple_count<< std::endl;
    std::cout << "Orange Count : " << orange_count << std::endl;
    std::cout << "Fruit Count : " << fruit_count << std::endl;
    std::cout << "Narrowing Conversion : " << narrowing_conversion_functional << std::endl;
    std::cout << "Size of int : " <<sizeof(int) << std::endl;
    std::cout << "Size of apple_count : " << sizeof(apple_count) << std::endl;
    
    return 0;

}

