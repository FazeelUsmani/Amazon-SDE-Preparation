vector<bool> processQueries(int a[], int n, vector<pair<int, int>> &queries,
                            int q) {
    
    vector<bool> ans;
    if (q == 0) return ans;
    
    vector<int> left(n, 0), right(n, n-1);
    int lastIncr = 0;
    
    for (int i = 1; i < n; ++i) {
        if (a[i] > a[i-1])
            lastIncr = i;
        left[i] = lastIncr;
    }
    
    lastIncr = n-1;
    for (int i = n-2; i >= 0; --i) {
        if (a[i] > a[i+1])
            lastIncr = i;
        right[i] = lastIncr;
    }
    
    for (pair<int, int> x: queries) {
        ans.push_back( (right[x.first] >= left[x.second]) );
    }
    
    return ans;
}
