// to Display Fibonacci Series upto nth term (n is entered by user)
#include<iostream>
using namespace std;
int main()
{
  int a=0;
  int b=1;
  int c;
  int n;
  cin>>n;
  while(n>0)
  {
      cout<<a;
      c=a+b;
      a=b;
      b=c;
      n--;
  }

}