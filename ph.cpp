#include<bits/stdc++.h>
char a[100005];
char temp,l;
using namespace std;
int main()
{
    int n,x,p,q,r,ln;
    cin >> n;
    ln=n;
    cin >> a;
    cin >> x;
    for(long int i=0;i<x;i++)
    {
        scanf("%d",&p);
        if(p==1)
        {
            scanf("%d %d",&q,&r);
            temp=a[q];
            a[q]=a[r];
            a[r]=temp;
            cout << a << endl;
            for(int i=0;i<=ln/2;i++)
            {
                if(a[i]==a[n-i-1])
                {
                    if(i==ln/2)
                    {
                        cout << "YES" << endl;
                    }
                    continue;

                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }

        }
        if(p==2)
        {
            scanf("%d %c",&q,&l);
            a[q]=l;
            cout << a << endl;
            for(int i=0;i<=n/2;i++)
            {
                if(a[i]==a[n-i-1])
                {
                    if(i==n/2)
                        cout << "YES" << endl;
                    continue;
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }







        }
    }

}
