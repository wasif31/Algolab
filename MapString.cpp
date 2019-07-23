#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main()
{
    string s;
    while(cin>>s){
        if(s[0] =='T')
            m[s]++;
    }
    map<string,int>::iterator it;
    for(it = m.begin(); it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    return 0;
}
