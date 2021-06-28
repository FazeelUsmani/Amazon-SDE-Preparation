vector<int> findPairs(int arr[], int N) {
    unordered_map<int,int>um;
    vector<int> output;

    for(int i=0; i<N; i++){
        if (um[-(arr[i])] == 0 && um[(arr[i])] == 0){
            um[arr[i]]++;
        }
        if (um[-(arr[i])] == 1 && um[(arr[i])] == 0){
            um[-(arr[i])]++;
            um[(arr[i])] = um[-(arr[i])];
            if(arr[i] >=0){
                output.push_back(-(arr[i]));
                output.push_back(arr[i]);
            } else {
                output.push_back(arr[i]);
                output.push_back(-(arr[i]));
            }
        }
    }
    return output;
}