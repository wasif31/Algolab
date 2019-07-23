/**
    Extended Euclidean
*/
#include<bits/stdc++.h>
using namespace std;
int x,y;

void extendedEuclid(int a,int b)
{
    if(a == 0)
    {
        x = 0;
        y = 1;
    }
    else
    {
        extendedEuclid(b % a, a);
        int temp = y;
        y = x;
        x = temp - (b/a)*x;
    }
}

int main()
{
    int a = 35 ;
    int b = 15 ;
    extendedEuclid(a, b) ;

    cout<<"GCD of 35 and 15 is : "<<(a*x)+(b*y)<<endl ;
    cout<<"x : "<<x<<endl ;
    cout<<"y : "<<y<<endl ;

    return 0 ;
}

