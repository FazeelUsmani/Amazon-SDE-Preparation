vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    int n=arr1.size();
    int m=arr2.size();
    vector<int> output;
    vector<int> notInArr2; // elements that are in arr1 but not in arr2
    unordered_map<int,int> uMap;
    for(int i=0;i<n;i++){
        uMap[arr1[i]]++;
    }
    for(int i=0; i<m; i++){
        if(uMap.find(arr2[i])!= uMap.end()){
            int counter = uMap[arr2[i]];
            while(counter > 0){
                output.push_back(arr2[i]);
                uMap[arr2[i]]=-1;
                counter--;
            }
        }
    }

    for(auto i:uMap){
        int counter=i.second;
        if(counter>0){
            while(counter>0) {
                notInArr2.push_back(i.first);
                counter--;
            }
        }
    }
    sort(notInArr2.begin(), notInArr2.end());
    for(int i : notInArr2){
        output.push_back(i);
    }
    return output;
}