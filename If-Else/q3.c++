//to Find Largest Number Among Three Numbers entered by users
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3)
    {
        cout<<num1<<"is greater than "<<num2<<"and"<<num3;
    }
    else if(num2>num1 && num2>num3)
    {
        cout<<num2<<"is greater than "<<num1<<"and"<<num3;
    }
    else{
        cout<<num3<<"is greater than "<<num1<<"and"<<num2;
    }
}