int threeSumClosest(vector<int> arr, int target) {
    
    sort(arr.begin(), arr.end());
    int closestSum = INT_MAX;
    
    for (int i = 0; i < arr.size()-2; ++i) {
        int leftPtr = i+1, rightPtr = arr.size()-1;
        
        while (leftPtr < rightPtr) {
            int sum = arr[i] + arr[leftPtr] + arr[rightPtr];
            
            if (abs(1LL*target - sum) < abs(1LL*target - closestSum)){
                closestSum = sum;
            }
            
            if (sum > target)
                rightPtr--;
            else
                leftPtr++;
        }
    }
    
    return closestSum;
}
