int binary_search(const int arr[],int arr_size, int numero_alvo){
    int a=0, b=arr_size-1;
    while (a<=b){
        int meio_da_lista=(a+b)/2; // constante K
        
        if (arr[meio_da_lista]==numero_alvo)
            return meio_da_lista; // caso o numero alvo seja encontrado no meio da lista
        
        if (arr[meio_da_lista] > numero_alvo)
            b=meio_da_lista-1; 
            // caso o valor alvo for maior que o valor presente no meio
            // diminua as opções da --->>

        else
            a=meio_da_lista+1;
            // agora caso o valor alvo for menor que o valor do meio
            // aumente a caçada, esprema os números da <<--- até chegar no valor.
    }

    return -1; // caso o valor não seja encontrado.
}

int fast_binary_search(const int arr[], int arr_size, int valor_alvo){
    int k=0; // constante K que será usada no algoritmo
    for (int b=arr_size/2;b>0;b/=2){
        while(k+b < arr_size && arr[k+b]<=valor_alvo) k+=b;
    }

    if (arr[k]==valor_alvo)
        return k;
    else
        return -1;
}
