#include <iostream>

using namespace std;

int fact(int num) {
  if (num < 2)
   return num;
  return num * fact(num - 1);
}

int main() { 
 int no;
 cout << "Factorial of " << no << " is " << fact(num) <<endl;
 return 0;
}
