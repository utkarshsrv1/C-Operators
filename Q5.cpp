//Q5 - Write a program to calculate the sum of digits of a 3 digit number.

#include <iostream>
using namespace std;

int main(){
    
    int number = 123;
    int sum;
    
    int first_digit = number/100;
    int second_digit = number/10;
    int sec_digit=second_digit%10;
    int third_digit = number%10;

    sum = first_digit + sec_digit +third_digit;
    
    cout<<sum<<endl;
    
    return 0;
}
