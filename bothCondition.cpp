//Q2 - Write a program to take the values of two variables a and b from the keyboard and then check if
//both the conditions 'a < 50' and 'a < b' are true.

#include <iostream>
using namespace std;

int main(){
  int a;
  int b;

  //Taking input  from the users
  cout<<"Enter the first digit over here"<<endl;
  cin>>a;

  cout<<"Enter the second digit over here"<<endl;
  cin>>b;

  //Now checking the given condition
  if(a<50&a<b){
    cout<<"0"<<endl;
  }
  else
  {
    cout<<"1"<<endl;
  }
  return 0;
}
