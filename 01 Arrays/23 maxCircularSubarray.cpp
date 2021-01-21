int circularSubarraySum(int A[], int num){
    
   if (num == 0)
        return 0;
    
    int _min = INT_MAX, _max = INT_MIN;
    int minA = 0, x, maxA = 0, sum = 0;
    
    for (int i = 0; i < num; ++i){
        x = A[i];
        minA += x;
        _min = min (_min, minA);
        minA = min (minA, 0);
        
        maxA += x;
        _max = max (_max, maxA);
        maxA = max (maxA, 0);
        
        sum += x;            
    }
    
    if (sum == _min)
        return _max;
    return max(_max, sum - _min);
}
