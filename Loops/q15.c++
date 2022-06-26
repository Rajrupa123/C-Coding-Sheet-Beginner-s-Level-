//Check whether the given number is Armstrong Number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int rem;
    int sum=0;
    int cube;
    while(num>0)
    {
        rem=num%10;
        cube=rem*rem*rem;
        sum=sum+cube;
        num=num/10;
    }
    if(sum==num)
    {
        cout<<"Given number is Armstrong number";
    }
    else{
        cout<<"Given number is not an Armstrong number";
    }
}