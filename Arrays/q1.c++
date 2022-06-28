//To calculate Average 
#include<iostream>
using namespace std;
int AvgArray(int arr[],int n)
{
  int avg=0;
  for(int i=0;i<n;i++)
  {
      avg=avg+arr[i];
  }
  return avg/n;
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
  cout<<AvgArray(arr,n);
}