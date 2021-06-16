string keypair(int arr[], int N, int X) {
    unordered_set<int> uSet;
    for(int i=0; i<N; i++){
        if(uSet.find(X-arr[i]) != uSet.end()){
            return "Yes";
        }
        uSet.insert(arr[i]);
    }
    return "No";
}