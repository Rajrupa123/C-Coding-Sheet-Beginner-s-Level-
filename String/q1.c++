//To calculate the frequency of a given alphabet
#include<iostream>
using namespace std;
int CountAlphabets(char arr[],int alpha)
{
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        if(alpha==arr[i])
        {
            count++;
        }
    }
    return count;
}
int main()
{
   char arr[100];
   cin>>arr;

   int alpha;
   cin>>alpha;
   cout<<CountAlphabets(arr,alpha);
}