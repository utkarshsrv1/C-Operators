//Q5 - Write a program to calculate the sum of digits of a 3 digit number.

#include <iostream>
using namespace std;

int main(){
    
    int a = 8;
    int b = 10;
    
    int sum,diff,product,modulo;
    float division;
    
    sum=a+b;
    diff=a-b;
    product=a*b;
    division= (float)a/(float)b;
    //modulo = a%b; modulo is commented because it's not an expected output
    
    cout<<sum<<endl<<diff<<endl<<product<<endl<<division<<endl;
    
    return 0;
}
