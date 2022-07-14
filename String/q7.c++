/*+ program to check if a given string is a
Palindrome or not.*/
#include<iostream>
#include<cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    // Write your code here
   /* int length=strlen(str);
    for(int i=0;i<length;i++)
    {
        for(int j=length-1;j>i;j++)//
        {
            if(str[i]!=str[j])
            {
                return false;
            }
            else if(str[i]==str[j])//
            {
                return true;
            }
            else{
                i++;
                j--;
            }
            
        }
        
    }*/
    int i=0;
    int j=strlen(str)-1;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}




    int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
    
