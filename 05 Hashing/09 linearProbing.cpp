vector<int> linearProbing(int hashSize, int arr[], int N){
    vector<int> output(hashSize);
    bool inserted = false;
    int counter = 0;
    for (unsigned i=0; i<hashSize; i++){
        output[i]=-1;
    }
    int position;
    for(int i=0; i<N; i++){
        if(counter>=hashSize){
            break;
        }
        position = arr[i]%hashSize;
        while (output[position] != (-1)){
            if (output[position] == arr[i]){
                inserted = true;
                break;
            }
            position=(position+1)%hashSize;
        }
        if(inserted == false) {
            output[position] = arr[i];
            counter++;
        }
        inserted = false;
    }
    return output;
}
