/*a Program to Display Fibonacci Series upto
certain number n (n is entered by user)
*/


#include<iostream>
using namespace std;
int main()
{
 int a=0;
 int b=1;
 int c;
 int n;
 cin>>n;
 int count=0;
 while(a!=n)
 {
    cout<<a;
    c=a+b;
    a=b;
    b=c;
    count++;
    
 }
}