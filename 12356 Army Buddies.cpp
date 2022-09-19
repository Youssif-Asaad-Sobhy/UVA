#include <bits/stdc++.h>
#define ll long long
using namespace std ;
int main()
{
              std::ios_base::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
              int x,y;
        while(cin>>x>>y)
        {
            if(x==0&&y==0)
              return 0;
            vector<pair<ll,ll>>v(x+2);
        for(int i=1;i<=x;i++)
        {
            v[i].first=i-1;
            v[i].second=i+1;
        }
        for(int i=0;i<y;i++)
        {
            ll a,b;
            cin>>a>>b;
            if(v[a].first==0)
                cout<<"* ";
            else cout<<v[a].first<<" ";
            if(v[b].second==x+1)
                cout<<"*";
            else cout<<v[b].second;
            cout<<endl;
            v[v[a].first].second=v[b].second;
            v[v[b].second].first=v[a].first;
        }
        cout<<"-"<<endl;
       }
}
