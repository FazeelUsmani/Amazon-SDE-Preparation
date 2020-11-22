vector<int> duplicates(int a[], int n) {
    
    vector<int> cnt(n, 0);
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        cnt[ a[i] ]++;
    }
    
    for (int i = 0; i < n; ++i) {
        if (cnt[i] > 1) {
            res.push_back(i);
        }
    }
    
    if (res.size())
        return res;
    return {-1};
}
