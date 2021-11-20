int MissingNumber(vector<int>& array, int n) {
    long long int tot = (n*(n+1))/2;

    for (int &x: array)
        tot -= x;

    return tot;
}
