//To display the largest element in the array
#include<iostream>
using namespace std;
int LargestElementArray(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
       for(int j=1;j<n;j++)
       {
           if(max<arr[j])
           {
               max=arr[j];
           }
       }
    }
    return max;
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
    cout<<LargestElementArray(arr,n);

}
