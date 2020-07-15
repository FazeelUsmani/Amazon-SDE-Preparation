
int thirdLargest(int a[], int n)
{
    if (n < 3)
        return -1;
        
    priority_queue<int, vector<int>, greater<int> > pq (a, a+3);
    
    for (int i = 3; i < n; ++i){
        if (a[i] > pq.top()){
            pq.pop();
            pq.push(a[i]);
        }
    }
    
    if (pq.size() > 2)
        return pq.top();
    return -1;
}
