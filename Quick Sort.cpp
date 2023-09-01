/*
void swap(int& a, int& b){
    // geralmente essa função não é necessária, já que o próprio c++ conta com um swap build-in
    int temp=a; // uma copia do int a
    a=b;
    b=temp;
}   
*/

int particao(vector<int>& arr, int low, int high){
    int pivo=arr[high]; // escolhe o ultimo elemento da lista.
    int i=low-1; // indice do menor elemento

    for (int j=low;j<=high-1;j++){ // o "-1" serve para iterar sobre todos valores exceto o pivô
        if (arr[j]<=pivo){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // coloca o pivô em sua devida posição, fazendo com que todos os elementos a esquerda seja
    // menor ou igual ao pivô
    swap(arr[i+1], arr[high]); 
    return (i+1);
}

void quick_sort(vector<int>& arr, int low, int high){
    if (low<high){
        int pi=particao(arr, low, high);

        quick_sort(arr, low, pi-1);
        quick_sort(arr, pi+1,high);
    }
}

int main(){
    vector<int> arr={4, 1, 6, 0, 7, 5,10,9};
    quick_sort(arr, 0, arr.size()-1);

    for (int elem : arr){
        cout<<elem<<" ";
    }
}
