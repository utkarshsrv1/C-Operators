//Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include <iostream>
using namespace std;

int main(){
    
    int number = 12345;
    int sum;
    
    int first_digit = number/10000;
    int forth_digit = number/10;
    
    int fourth_digit = forth_digit%10;
    sum = first_digit + fourth_digit;
    
    cout<<sum<<endl;
    
    return 0;
}
