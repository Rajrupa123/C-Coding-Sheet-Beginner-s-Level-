//Check whether the given number is palindrome or not
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int rem;
    int sum=0;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*10; //reverse a number and check with the original number
        num=num/10;

    }
    if(sum==num)
    {
        cout<<"Given number is Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
}