//To find the length of the string
#include<iostream>
using namespace std;
int StringLength(char arr[])
{
 int count=0;
 for(int i=0;arr[i]!='\0';i++)
 {
     count++;
 }
 return count;
}
int main()
{
  char arr[100];
  cin>>arr;
  cout<<StringLength(arr);
}