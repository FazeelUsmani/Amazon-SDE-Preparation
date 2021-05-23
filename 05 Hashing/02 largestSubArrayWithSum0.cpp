int maxLen(int arr[], int n) {
    unordered_map<int,int>uMap;
    int sum=0;
    int output=0;
    for(auto i=0;i<n;i++){
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