#include <iostream>
using namespace std;
int main(void)
{
 int no;
 long fac = 1;

 cout << "Enter a Number : ";
 cin >> no;

  for (int r= no; r >= 1; r--)
  {
    fac = fac * r;
  }

 cout << "Factorial of " << no <<" is " << fac <<endl;
 
}