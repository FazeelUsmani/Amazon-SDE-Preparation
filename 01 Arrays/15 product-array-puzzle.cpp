vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
    vector<long long int> prod(n, 1);
    long long int temp = 1;
    
    for (int i=0; i < n; ++i) {
        prod[i] = temp;
        temp *= nums[i];
    }
    
    temp = 1;
    for (int i = n-1; i >= 0; --i) {
        prod[i] *= temp;
        temp *= nums[i];
    }
   
    return prod;
}
