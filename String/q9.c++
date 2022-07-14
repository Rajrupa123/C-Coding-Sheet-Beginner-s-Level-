#include<iostream>
#include<cstring>
using namespace std;
string Capital_letter(string text)
{
    for(int x=0;x<text.length();x++)
    {
        if(x==0)
        {
            text[x]=toupper(text[x]);
        }
        else if(text[x-1]==' ')
        {
            text[x]=toupper(text[x]);
        }
    }
    return text;
}
int main()
{
  char text[100];
  cin.getline(text,100);
  cout<<Capital_letter(text);
}