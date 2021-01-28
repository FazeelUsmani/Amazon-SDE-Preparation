// Given two arrays A and B and their sizes N and M respectively 
int NumberofElementsInIntersection (int a[], int b[], int n, int m )
{
    
    unordered_set<int> s1, s2;
    for (int i = 0; i < n; ++i) {
        s1.insert(a[i]);
    }
    
    for (int i = 0; i < m; ++i) {
        s2.insert(b[i]);
    }
    
    int cnt = 0;
    for (auto i = s1.begin(); i != s1.end(); ++i) {
        if (s2.find(*i) != s2.end()) {
            cnt++;
        }
    }
    
    return cnt;
}
