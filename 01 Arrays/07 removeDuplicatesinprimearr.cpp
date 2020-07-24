
vector<int> removeDuplicate(vector<int>& arr, int n)
{
    vector<int> uniqueElements;
    unordered_set <int> s;
    
    for (int x : arr){
        if (s.find(x) == s.end()){
            s.insert(x);
            uniqueElements.push_back(x);
        }
    }
    
    return uniqueElements;
}
