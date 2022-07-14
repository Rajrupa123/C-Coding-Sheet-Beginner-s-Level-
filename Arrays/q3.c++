#include<iostream>
#include<cmath>
using namespace std;
int mean(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int ans=sum/n;
    return ans;
}
int sumOfSqaures(int arr[],int n)
{
    int SS=0;
    for(int i=0;i<n;i++)
    {
      SS=pow(arr[i]-mean(arr,n),2);
    }
    return SS;
}
int SD(int arr[],int n)
{
    int standardDeviation=sqrt(sumOfSqaures(arr,n)/n-1);
    return standardDeviation;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<SD(arr,n);
}
