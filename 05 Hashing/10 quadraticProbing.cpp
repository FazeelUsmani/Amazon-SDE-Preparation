void QuadraticProbing(vector <int>&hash, int hashSize, int arr[], int N){
    int position;
    int counter = 1;
    for (int i = 0; i < N; i++){
        position = arr[i] % hashSize;
        while (hash[position] != (-1) && counter < hashSize){
            position=(position + (counter * counter)) % hashSize;
            counter++;
        }
        hash[position] = arr[i];
    }
    for (int output : hash){
        cout << output <<" ";
    }
}