//To concatenate two strings entered by the user
#include<iostream>
#include<cstring>
using namespace std;
void ConcatenateString(char arr1[],char arr2[])
{
   strcat(arr1,arr2);
}
int main()
{
    char arr1[100];
    char arr2[100];
    cin>>arr1>>arr2;
    ConcatenateString(arr1,arr2);

}