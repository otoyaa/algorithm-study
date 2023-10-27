                    /*May*/
#include <bits/stdc++.h>          
#define vi vector<int>
#define pb push_back
#define MAXN 1e5
#define endl '\n';
typedef long long ll;
using namespace std;

int binary_search(vi arr,int x){
    int left=0;int right=arr.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]<x){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return -1;
}

void solve(){
    int n,x;cin>>n>>x;
    vi A(n);
    for(int i=1;i<=n;i++)cin>>A[i];
    int ans=binary_search(A,x);
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);   
    
    solve();
}
