vector<int> subarraySum(int arr[], int n, int s){
    
    int sum = arr[0], start = 0;
    
    for (int i = 1; i <= n; ++i) {
        
        while (sum > s && start < i-1) {
            sum -= arr[start];
            start++;
        }
        
        if (sum == s)   return {start+1, i};  // index starting at 1 so +1 @start
        
        if (i < n)  sum += arr[i];
    }
    
    return {-1};
}



