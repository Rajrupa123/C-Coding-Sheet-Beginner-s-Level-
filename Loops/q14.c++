#include<iostream>
using namespace std;
//To create prime number function
bool Isprime(int n)
{
    int count=0;
    for (int i = 2; i <=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return true;
    }
    
}
//to check whether the given number is prime or not by calling the function and printing the value of i
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++)
    {
        if(Isprime(i))
        {
            cout<<i;
        }
    }
    
}