//To compute quotient and remainder
#include<iostream>
using namespace std;
int main()
{
    int dividend;
    cin>>dividend;
    int divisor;
    cin>>divisor;
    int rem=dividend%divisor;
    cout<<"The Remainder is ",rem;
    int quotient=dividend/divisor;
    cout<<"The Quotient is ",quotient;
    
}