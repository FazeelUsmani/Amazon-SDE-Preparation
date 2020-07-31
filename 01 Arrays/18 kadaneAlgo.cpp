// Standard algorithms to find out the maximum contiguous subarray sum. 
// Master this as variations of this algo are really helpful to apply in future problems

int maxSubarraySum(int arr[], int n){
    
    int maxSum = 0, tot = 0;
    
    for (int i = 0; i < n; ++i){
        tot += arr[i];
        tot = max(tot, 0);
        maxSum = max(maxSum, tot);
    }
    return maxSum;
}
