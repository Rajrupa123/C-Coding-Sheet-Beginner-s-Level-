//To calculate sum of  1st N Natural numbers
//Method 1 using Formula
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int sum=(n*(n+1))/2;
  cout<<sum;

  //Method 2 using For Loop

  int sum_1=0;
  for (int i = 1; i <= n; i++)
  {
      sum_1=sum_1+i;
  }
  cout<<sum_1;
  
}