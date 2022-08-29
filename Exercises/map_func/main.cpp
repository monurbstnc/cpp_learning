#include <iostream>
int map(int x, int in_min, int in_max, int out_min, int out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
int main()
{

std::cout<<"0-9600 -> 0->255 conversion of 255 is  : " << map(120,0,255,0,9600)<<std::endl;

    return 0;
}

