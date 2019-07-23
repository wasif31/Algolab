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

int modInverse(int a, int m)
{
    extendedEuclid(a,m);
    return (x % m + m) % m;
}

int main(void)
{
    int ans  = modInverse(3, 11) ;
    cout<<"Modular Multiplicative Inverse of 3 and 11 is : "<<ans<<endl ;
    return 0 ;
}

