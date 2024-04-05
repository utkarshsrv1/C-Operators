#include <iostream>
using namespace std;

//Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
//girls received grades "A" if 17 boys made up 80% of the students that received grades "A".

int main(){
    
  int Total_pupils = 45;
  int boys = 17;
  
  int grade_a_pupils = (45*80)/100;
  int grade_a_girl = grade_a_pupils-boys;
  
  cout<<grade_a_girl<<endl;
  
  
  return 0;
}
