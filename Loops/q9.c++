/*a Program to display sum of all digits of a given
Number N by user*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
    sum=sum+i;

    }
    cout<<sum;

}