//Reverse a number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int sum=0;
    int rem;
    while(num>0)
    {
     rem=num%10;
     sum=sum+rem*10;
     num=num/10;
    }
    cout<<sum;
}