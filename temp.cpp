#include <bits/stdc++.h>    
using namespace std;
using ll=long long;
using dll=long double;
using pq=priority_queue<int,vector<int>,greater<int>>;
using graph=vector<vector<int>>;

#define int ll
#define double dll
#define sbt(x) (x).begin(),(x).end()
#define gyaku(x) reverse((x).begin(),(x).end())

typedef unsigned long long ull;

const ll mod=1000000007;
const ll INF= 1LL << 60;

const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
const int dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};

// const int dx[4] = {1,0,-1,0}; 
// const int dy[4] = {0,1,0,-1};

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

/*struct UnionFind{
    vector<int> par,rank,siz;
    UnionFind(int no):par(no,-1),rank(no,0),siz(no,1){  }

    int root(int x){
        if(par[x]==-1)return x;
        else return par[x]=root(par[x]);
    }
    bool issame(int x,int y){
        return root(x)==root(y);
    }
    bool unite(int x,int y){
        int rx=root(x),ry=root(y);
        if(rx==ry)return false;
        if(rank[rx]<rank[ry])swap(rx,ry);
        par[ry]=rx;
        if(rank[rx]==rank[ry])++rank[rx];
        siz[rx]+=siz[ry];
        return true;
    }
    int size(int x){
        return siz[root(x)];
    }
};*/

struct 光線{
    光線(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(15);
    }
}光線;

signed main(){
}
