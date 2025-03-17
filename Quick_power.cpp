#include <bits/stdc++.h>    
using namespace std;
using ll=long long;
using dll=long double;
using pq=priority_queue<int,vector<int>,greater<int>>;
using graph=vector<vector<int>>;

#define int ll
#define db dll
#define sbt(x) (x).begin(),(x).end()
#define gyaku(x) reverse(sbt(x))
#define vset(x) x.erase(unique(x.begin(),x.end()),x.end())
#define so(x) sort(x.begin(),x.end())

/* I miss the old Kanye */
#define fi first
#define se second
#define vi vector<int>
#define P pair<int,int>
#define pb push_back
#define r() cout<<'\n'

typedef unsigned long long ull;

struct asahi{
    asahi(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(15);
    }
}asahi;

int qp(int a,int b){
    int ans=1;
    for(;b;b>>=1){
        if(b&1){
            ans*=a;
        }
        a*=a;
    }
    return ans;
}

signed main(){
    int a,b;cin>>a>>b;
    o(qp(a,b));
}

