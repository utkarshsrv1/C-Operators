//Q1 - Write a program to check whether two numbers (entered by user) are equal or not.

#include <iostream>
using namespace std;

int main(){
  int a;
  int b;

  cout<<"Enter first number"<<endl;
  cin>>a;

  cout<<"Enter second number"<<endl;
  cin>>b;

  if(a==b){
    cout<<"1"<<endl;
  }
  else
  {
    cout<<"0"<<endl;
  }

  return 0;
}
