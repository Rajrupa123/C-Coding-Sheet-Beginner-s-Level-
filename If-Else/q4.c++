/* a Program which accepts coefficients of a
quadratic equation from the user and displays the roots
(both real and complex roots depending upon the
discriminant).
*/
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int root=sqrt(b*b-4*a*c);
    int discriminant1=(+b*root)/2*a;
    int discriminant2=(-b*root)/2*a;
    cout<<discriminant1<<" "<<discriminant2;


}