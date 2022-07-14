#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char line[100];
    string temp=" ";
    cin.getline(line,100);
    for(int i=0;i<strlen(line);i++)
    {
        if(line[i]>='a'&& line[i]<='z'|| line[i]>='A' && line[i]<='Z')
        {
            temp=temp+line[i];
        }
    }
    
    cout<<"OutPut is"<<temp<<endl;
}