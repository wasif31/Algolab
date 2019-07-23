#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int m,ck=1;
    cin >> m;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+m);
    for(int i=0;i<m-1;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(a[i]==a[j])
                break;
            else
            {
                ck++;
                break;
            }
        }
    }
    cout << ck << endl;















}
