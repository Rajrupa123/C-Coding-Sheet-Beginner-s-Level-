#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for (int i = a; i <= a*b; i++)
    {
       if(i%a==0 && i%b==0)
       {
           cout<<i;
           break;
       }
    }
    
}