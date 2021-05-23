vector<int> linearProbing(int hashSize, int arr[], int N){
    vector<int> output(hashSize);
    for (unsigned i=0; i<hashSize; i++){
        output[i]=-1;
    }
    int position;
    for(int i=0; i<N; i++){
        if(i>=hashSize){
            break;
        }
        position = arr[i]%hashSize;
        while (output[position] != (-1)){
            position=(position+1)%hashSize;

        }
        output[position] = arr[i];
    }
    return output;
}
