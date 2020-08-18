
/*You are required to complete this method*/
int max_sum(int A[],int N)
{
    int sum = 0;
    for (int i = 0; i < N; ++i)
        sum += A[i];
        
    int currSum = 0;
    for (int i = 1; i < N; ++i)
        currSum += (i*A[i]);
        
    int res = currSum;
    for (int i = 1; i < N; ++i){
        int nextSum = currSum + (A[i-1]*(N-1)) - (sum-A[i-1]);
        currSum = nextSum;
        res = max(res, nextSum);
    }
        
    return res;
}
