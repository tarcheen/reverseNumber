/*
Developer: Hamed Mirlohi
Date: 09/11/2019
Simple program to reverse a give number
*/


#include <iostream>

int reverse_number(int number)
{
   //                     0
   // 13 : 10 =  1 % 3    3 + (0 * 10)         
   // 1 :  10 =  0 % 1    1 + (3 * 10)
   // 0 :  10 =  0 % 0    

    int result = 0;

    while(number % 10 > 0)
    {
        result = (number % 10) + (result * 10);
        number /= 10;
    }

    return result;

}

int main(void)
{
    int number = 13;
    int reversed_number = reverse_number(number);
    std::cout<< "reverse of " << number << " is "<<reversed_number << std::endl;
}