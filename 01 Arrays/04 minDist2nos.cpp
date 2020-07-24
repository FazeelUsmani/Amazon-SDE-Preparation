
int minDist(int a[], int n, int x, int y) {
    
    int ans = INT_MAX;
    int prev = -1;
    
    for (int i = 0; i < n; ++i){
        if (a[i] == x || a[i] == y){
            if (prev != -1 && a[prev] != a[i])
                ans = min(ans, i-prev);
            prev = i;
        }
    }
    
    if (ans == INT_MAX)
        return -1;
        
    return ans;
}
