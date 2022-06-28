/* program to change every letter in a given string
with the letter following it in the alphabet (ie. a becomes b, p
becomes q, z becomes a).*/
#include<iostream>
using namespace std;
void replaceChar(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='a')
        {
          arr[i]='b';
        }
        else if(arr[i]=='p')
        {
            arr[i]='q';
        }
        else if(arr[i]=='z')
        {
            arr[i]='a';
        }
    }
  

}
int main()
{
  char arr[100];
  cin>>arr;
  replaceChar(arr);
}