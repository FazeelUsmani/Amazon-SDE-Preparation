int maxLen(int arr[], int size) {
    unordered_map<int,int>uMap;
    for(auto i=0; i<size; i++){
        if(arr[i]==0) {
            arr[i] = -1;
        }
    }
    int sum=0;
    int output=0;
    for(auto i=0; i<size; i++){
        sum+=arr[i];

        if(sum==0){
            output=i+1;
        }
        if(uMap.find(sum)==uMap.end()){
            uMap[sum]=i;
        }
        if(uMap.find(sum)!=uMap.end()){
            output=max(output,i-uMap[sum]);
        }
    }
    return output;
}