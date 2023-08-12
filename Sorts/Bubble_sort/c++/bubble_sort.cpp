// recursive bubble sort
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int x){
    if (x==1)
        return;

    int count = 0;

    for (int i=0;i<x-1;i++)
    if (arr[i]>arr[i+1]){
        swap(arr[i], arr[i+1]);
        count ++;
    }

    if (count == 0)
        return;

    bubble_sort(arr, x-1);

}

void result(int arr[], int x){
    for (int i=0;i<x;i++){
        cout <<arr[i]<<" "<<endl;
    }
}

int main(){
    int arr[10] = {5, 3, 4, 8, 9, 10, 2, 1, 6, 7};
    int x=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, x);
    result(arr, x);

    return 0;
}
