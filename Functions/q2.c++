#include<iostream>
using namespace std;
bool IsPrime(int n)
{
    int count=0;
    for (int i = 2; i <= n; i++)
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
int main()
{
    int n,i;
    cin>>n;
    bool flag=false;
    for(int i=2;i<=n/2;i++)
    {
        if(IsPrime(i))
        {
            if(IsPrime(n-i))
            {
                cout<<n<<"="<<i<<"+"<<n-i<<endl;
            }
        }
    }
    if(!flag)
    {
        cout<<n<<"can't be expressed as a combination of sum of two prime numbers";
    }
}