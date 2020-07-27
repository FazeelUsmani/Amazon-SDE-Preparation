void convertToWave(int *arr, int n){
    
    for (int i = 0; i+1 < n; i=i+2){
        swap(arr[i], arr[i+1]);
    }
}
