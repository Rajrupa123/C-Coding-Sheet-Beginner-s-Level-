/* a Program to Calculate Power of a Number
without using inbuilt pow() function by taking two
inputs from users as Base and exponent respectively*/
#include<iostream>
using namespace std;
int main()

{

  int base,exponent;
  cin>>base>>exponent;
  int result=1;
  while(exponent!=0)
  {
    result*=base;
    --exponent;
  }
  cout<<result;
}