#include<bits/stdc++.h>
char a[100005];
char temp,l;
using namespace std;
int main()
{
    int n,x,p,q,r,ln;
    scanf("%d %s %d",&n,a,&x);
    ln=n;
    for(long int i=0;i<x;i++)
    {
        scanf("%d",&p);
        if(p==1)
        {
            scanf("%d %d",&q,&r);
            temp=a[q];
            a[q]=a[r];
            a[r]=temp;
            for(int i=0;i<=ln/2;i++)
            {
                if(a[i]==a[n-i-1])
                {
                    if(i==ln/2)
                    {
                        printf("YES\n");
                    }

                }
                else
                {
                    printf("NO\n");
                    break;
                }
            }

        }
        if(p==2)
        {
            scanf("%d %c",&q,&l);
            a[q]=l;
            for(int i=0;i<=n/2;i++)
            {
                if(a[i]==a[n-i-1])
                {
                    if(i==n/2)
                        printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                    break;
                }
            }







        }
    }

}
