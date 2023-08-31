#include <bits/stdc++.h>
using namespace std;

void ShellSort(vector<int>& arr){ // "&" indica que havera mudanças nos elementos do vector
    int n=arr.size();
    for (int gap=n/2;gap>0;gap/=2){
        for (int i=gap;i<n;i++){
            int temp = arr[i]; // juntar e armazenar os dois grupos
            int j;
            for (j=i; j >= gap && arr[j-gap] > temp; j-=gap){
                arr[j] = arr[j-gap];
            }
            arr[j]=temp;
        }
    }
}

int main(){
    // criar o vector
    vector<int> arr={7, 6, 9, 3, 1, 5, 2, 4};

    ShellSort(arr);
    for (int elem : arr){
        cout<<elem<<" ";
    }
}
