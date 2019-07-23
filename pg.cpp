#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b=0;
    cin >> a;
    long int i=a;
    while(1)
    {
        if(i%5==0){

            b=i;
            break;
        }
        else
            i--;
    }
    cout << b << endl;

}
