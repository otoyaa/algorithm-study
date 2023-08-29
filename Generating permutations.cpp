// duas formas de criar permutações

vector<int> permutacoes;
vector<bool> chosen;
int n;

void search(){
if (permutacoes.size()==n){
    for (int num: permutacoes){
        cout<<num<<" ";    // escrevendo a saida
    }  
    cout<<"\n";
}
    else{
        for (int i=0;i<n;i++){
            if (chosen[i])  // 既に選択済みの場合はスキップ
                continue;
            chosen[i]=true; // 要素を選択済みとする
            permutacoes.push_back(i);    // processamento e recursão
            search();
            chosen[i]=false;
            permutacoes.pop_back();
        }
    }
}

void permutation_two(){
    for (int i=0;i<n;i++){  
        permutacoes.push_back(i);   // adicionando no vector todos os valores de 0 a n
    }

    do{
        for (int per: permutacoes){
            cout<<per<<" ";    // escrevendo a saida 
        }
        cout<<"\n";
    }    
    while (next_permutation(permutacoes.begin(), permutacoes.end())); // usando STL para criar as permutações
}

int main(){
    n=3;
    // chosen.resize(n, false);    // call first method
    // search(); 
    permutation_two();    // call second method
}
