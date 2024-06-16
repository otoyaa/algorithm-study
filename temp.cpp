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

/*eriNNNNNNNNNNNNNNN*/
#define fi first
#define se second
#define vi vector<int>
#define P pair<int,int>
#define pb push_back
#define r() cout<<'\n'

typedef unsigned long long ull;

const ll mod=1000000007;
const ll modint=998244353;
const ll INF=1LL<<60;
const double pi=3.141592653589793;

const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
const int dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
const int dx4[4] = {1,0,-1,0}; 
const int dy4[4] = {0,1,0,-1};
const string YesNo[2]={"No","Yes"};
void Yes(int ok=1){cout<<YesNo[ok]<<'\n';}


template<class t,class u> void chmax(t&a,u b){if(a<b)a=b;}
template<class t,class u> void chmin(t&a,u b){if(b<a)a=b;}

template<class T>
istream &operator>>(istream &is,vector<T>&v){
    for(T &t:v){
        is>>t;
    }
    return is;
}

int gcd(int a,int b){
    return b?gcd(b,a%b):a;
}

int lcm(int a,int b){
    return a/gcd(a,b)*b;
}

ull powm(ull a,ull b,ull mod){
    ull p=a,ans=1;
    for(int i=0;i<60;++i){
        if((b&(1ll<<i))!=0){
            ans*=p;ans%=mod;
        }
        p*=p;p%=mod;
    }
    return ans;
}

struct UnionFind{
    vector<int> par,rank,siz;
    UnionFind(int no):par(no,-1),rank(no,0),siz(no,1){  }

    int root(int x){
        if(par[x]==-1)return x;
        else return par[x]=root(par[x]);
    }
    bool same(int x,int y){
        return root(x)==root(y);
    }
    bool _union(int x,int y){
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
};

struct segki{
    int size=1;
    vector<int> seg;

    void b(int sz){
        while(size<=sz)size*=2;
        seg.resize(size*2,INF);
    }
    void update(int pos,int x){
        pos+=size;
        seg[pos]=x;
        while(pos>=1){
            pos>>=1; // mid
            seg[pos]=min(seg[pos*2],seg[pos*2+1]);
        }
    }
    int _query(int l,int r,int a,int b,int pos){
        if(l<=a&&b<=r)return seg[pos];
        if(r<=a||b<=l)return INF;
        int x=_query(l,r,a,(a+b)/2,pos*2);
        int y=_query(l,r,(a+b)/2,b,pos*2+1);
        return min(x,y);
    }
    int query(int l,int r){
        return _query(l,r,0,size,1);
    }
};

struct 光線{
    光線(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(15);
    }
}光線;

signed main(){
}

