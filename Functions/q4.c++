//To convert the given number from decimal to binary
#include<iostream>
using namespace std;
int DecimalToBinary(int num)
{
    int rem;
    int i=1;
    int decimalToBinary;

    while(num>0)
    {
        rem=num%2;
        num=num/2;
        decimalToBinary+=rem*i;//imp
        i*=10;

    }
    return decimalToBinary;
}
int main()
{
 
 int num;
 cin>>num;
 cout<<DecimalToBinary(num);
}