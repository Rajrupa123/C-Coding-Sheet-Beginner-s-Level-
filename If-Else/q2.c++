//To check whether the character is vowel or consonant 
#include<iostream>
using namespace std;
int main()
{
    char alpha;
    cin>>alpha;
    if(alpha =='a'|| alpha =='e'|| alpha =='i'|| alpha =='o' || alpha =='u')
    {
        cout<<"The Given Character is a vowel";
    }
    else if(alpha =='A'|| alpha =='E'|| alpha =='I' || alpha =='O' || alpha =='U')
    {
        cout<<"The Given Character is a vowel";
    }
    else{
        cout<<"The Given Character is a Consonant";
    }
}