                     /*May Mac<3*/
#include <bits/stdc++.h>          
#define endl '\n';
typedef long long ll;
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++)cin>>v[i];
    vector<int> visitado(n+1,0),s;
    int no=1;
    while(visitado[no]==0){
        visitado[no]=1;
        s.push_back(no);
        no=v[no];
    }
    vector<int>ans;for(auto &x:s){
        if(x==no){
            no=-1;
        }if(no==-1){
            ans.push_back(x);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        if(i){
            cout<<" ";
        }cout<<ans[i];
    }cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);   
    
    solve();
}
