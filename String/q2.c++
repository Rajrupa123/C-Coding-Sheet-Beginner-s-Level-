/* a Program to Find the Number of Vowels, Consonants,
Digits and White Spaces in a String*/
#include<iostream>
using namespace std;
int count(char arr[])
{
    int countVowel=0;
    int countConsonant=0;
    int countDigits=0;
    int countWhiteSpaces=0;
    for(int i=0;arr[i]!='\0';i++)
    {
      if (arr[i]=='a' || arr[i]=='e'|| arr[i]=='i' || arr[i]=='o' || arr[i]=='u')
      {
          countVowel++;
      }
      else if(arr[i]!='a' || arr[i]!='e'|| arr[i]!='i' || arr[i]!='o' || arr[i]!='u')
      {
          countConsonant++;
      }
      else if(arr[i]==' ')
      {
          countWhiteSpaces++;
      }
      else {
          countDigits++;
      }
 return countVowel;
 return countConsonant;
 return countDigits;
 return countWhiteSpaces;
    }
}
int main()
{
  char arr[100];
  cin>>arr;
  cout<<count(arr);
}