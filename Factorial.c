#include <iostream>
using namespace std;
int main(void)
{
 int no;
 long fac;

 cout << "Enter a Number : ";
 cin >> no; //get user input

 fac = 1;

  for (int r=no; r >= 1; r--)
  {
    fac = fac * r;
  }

 cout << "Factorial of " << no <<" is " <<fac <<endl ; //display Factorial
 return 0;
}
