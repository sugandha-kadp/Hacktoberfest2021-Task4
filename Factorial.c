#include <iostream>
using namespace std;



int main() {
int no;
int fac = 1;



cout<<"Enter a positive integer: ";
cin>>no;



for (int r = 1; r <= no; ++r) {
fac *= r;
}
cout<< "Factorial of "<<no<<" = "<<fac;

return 0;
}
