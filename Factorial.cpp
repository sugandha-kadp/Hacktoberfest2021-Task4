#include <iostream>
using namespace std;
int main(void)
{
 int no;
 long fac;

 cout << "Enter a Number : ";
 cin >> fac;

no = fac;

  for (int r= no - 1; r >= 1; r--)
  {
    fac = fac * r;
  }

 cout << "Factorial of " << no <<" is " << fac <<endl;
 
}