/*a Program to Convert Binary Number to Decimal
manually by creating user-defined functions.
*/
#include<iostream>
#include<cmath>
using namespace std;
int BinaryToDecimal(int num)
{
    int rem;
    int i=0;
    int sum=0;
    while(num>0)
    {
        rem=num%10;
        sum=rem*pow(2,i);
        num=num/10;
        i++;
    }
    return sum;
}
int main()
{
 int num;
 cin>>num;
 cout<<BinaryToDecimal(num);
}