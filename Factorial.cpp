#include <iostream>
using namespace std;
int main(void)
{
 int no;
 long fac=1;

 //input number
 cout << "Enter a Number : ";
 cin >> no;
 
 //counting factorial
 for (int r=no; r >0; r--)
  {
    fac = fac * r;
  }
 
 //display factorial value
 cout << "Factorial of " << no <<" is " fac <<endl ;
}
