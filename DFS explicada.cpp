#include <bits/stdc++.h>          
#define read(x) cin>>x
#define vi vector<int>
#define l(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define f first     // Manda Tina Pupu♡
#define s second     //  FURIAAAA
#define MAXN 100100
#define no cout<<"No"<<"\n"
#define yes cout<<"Yes"<<"\n"
#define pii pair<int,int>
typedef long long ll;
using namespace std;

int n,a,b,vertice[MAXN];
// n é o numero de vertices, a e b representa as aresta do grafo
vector<int> aresta(MAXN);

void dfs(int id){
    vertice[id]=-1; // defina o nó pai como visitado
    for(int i=0;i<aresta[id].size();i++){
        // iterador sobre os nós vizinhos do atual
        int v=aresta[id][i]; // uma forma de iterar os nós vizinhos
        if(vertice[v]==0){ 
            dfs(v);
            // chama recursão para explorar os nós marcados como 0
            //(nós que não foram explorados)
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    cin>>n; // ler o numeros de vertices
    for(int i=0;i<n;i++){
        cin>>a>>b; // ler as pares de vertices que representam
        // as restas do grafo
        aresta[a].pb(b); 
        aresta[b].pb(a);
    }
    dfs(1);
}
