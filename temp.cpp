#include <bits/stdc++.h>    
using namespace std;
using ll=long long;
using dll=long double;

#define int ll
#define double dll
#define sbt(x) (x).begin(),(x).end()
#define gyaku(x) reverse((x).begin(),(x).end())

typedef unsigned long long ull;

const ll mod=1000000007;
const ll INF= 1LL << 60;

template<class t,class u> void chmax(t&a,u b){if(a<b)a=b;}
template<class t,class u> void chmin(t&a,u b){if(b<a)a=b;}

ull mp(ull a,ull b,ull mod){
    ull p=a,ans=1;
    for(int i=0;i<60;++i){
        if((b&(1ll<<i))!=0){
            ans*=p;ans%=mod;
        }
        p*=p;p%=mod;
    }
    return ans;
}

struct 光線{
    光線(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(15);
    }
}光線;

signed main(){
}
