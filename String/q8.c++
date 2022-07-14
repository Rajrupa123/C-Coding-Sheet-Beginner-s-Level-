/*to count all the words in a given
string.Words must be separated by only one space*/
#include<iostream>
#include<cstring>
using namespace std;
int Word_count(string text) {
int ctr = 0;
for (int x = 0; x < text.length(); x++)
{
if (text[x] == ' ')
ctr++;

}
return ctr+1;
}

int main()
{
    char arr[100];
    cin.getline(arr,100);
    cout<<arr<<endl;
    cout<<Word_count(arr);
}