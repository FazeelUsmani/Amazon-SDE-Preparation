vector<int> find3Numbers(vector<int> arr, int N)
{

    vector<int> small(N, -1);
    int minIdx = 0;
    for (int i = 1; i < N; ++i)
    {
        if (arr[i] <= arr[minIdx])
            minIdx = i;
        else
            small[i] = minIdx;
    }

    vector<int> large(N, -1);
    int maxIdx = N - 1;
    for (int i = N - 2; i >= 0; --i)
    {
        if (arr[i] >= arr[maxIdx])
            maxIdx = i;
        else
            large[i] = maxIdx;
    }

    vector<int> ans;
    for (int i = 1; i < N - 1; ++i)
    {
        if (large[i] != -1 && small[i] != -1)
        {
            ans.push_back(arr[small[i]]);
            ans.push_back(arr[i]);
            ans.push_back(arr[large[i]]);
            return ans;
        }
    }

    return ans;
}