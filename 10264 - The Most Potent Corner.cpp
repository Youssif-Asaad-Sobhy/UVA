#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define all(x) x.begin(),x.end()
#define IT_IS_TIME_TO_MAKE_SOME_SPAGHITII_CODE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
bool is_neighbor(int i, int j){
    int x = i^j;
    return (x&(-x)) == x;
}
int main()
{
    IT_IS_TIME_TO_MAKE_SOME_SPAGHITII_CODE
    ll z,a,b,x,y,c,d,t=1,i,j,cnt,cntt;
    string s;
    char cc;
    while(cin>>x)
    {
        y=pow(2,x);
        vector<ll>w(y);
        for(i=0;i<y;i++)
        {
            cin>>w[i];
        }
        cnt=cntt=0;
        vector<ll>ww(y);
        for(i=0;i<y;i++)
        {
            for(j=0;j<=x;++j)
            {
                z=1<<j;
                z=i^z;
                if(z<y)
                {
//                    cout<<i<<" "<<z<<endl;
                    ww[i]+=w[z];
                }
            }
        }
        for(i=0;i<y;++i)
        {
            for(j=0;j<=x;++j)
            {
                z=1<<j;
                z=i^z;
                if(z<y)
                {
                    cntt=max(cntt,ww[i]+ww[z]);
                }
            }
        }
        cout<<cntt<<el;
    }
    return 0;
}
