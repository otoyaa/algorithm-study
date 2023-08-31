void merge(vector<int>& arr, int left, int mid, int right){
    int n1=mid-left+1; // numeros de elementos no subvetor esquerdo
    int n2=right-mid; // numeros de elementos no subvetor direito

    vector<int> left_array(n1);
    vector<int> right_array(n2);

    for (int i=0;i<n1;i++){
        left_array[i]=arr[left+i];
    }

    for (int j=0;j<n2;j++){
        right_array[j]=arr[mid+1+j];
    }

    int i=0,j=0,k=left;
    while (i<n1 && j<n2){
        if (left_array[i]<=right_array[j]){
            arr[k]=left_array[i];
            i++;
        }else{
            arr[k]=right_array[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k]=left_array[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=right_array[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int>& arr, int left, int right){
    if (left<right){
        int mid = left + (right-left)/2;

        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);

        merge(arr, left, mid, right);
    }
}
