int equilibriumPoint(long long a[], int n) {

    long long sum = 0;
    for (int i = 0; i < n; ++i)
        sum += a[i];
        
    long long currSum = 0, diff = 0;
    for (int i = 0; i < n; ++i){
        diff = sum - currSum - a[i];
        if (diff == currSum)
            return i+1;
        currSum += a[i];
    }
    
    return -1;
}
