vector<int> countDistinct(int A[], int N, int K){
    unordered_map<int, int> uMap;
    vector<int> output;
    int counter = 0;

    for (int i = 0; i <K; i++) {
        if (uMap[A[i]] == 0) {
            counter++;
        }
        uMap[A[i]]++;
    }
    output.push_back(counter);

    for (int i = 0; i < N-K; i++) {
        if (uMap[A[i]] == 1) {
            counter--;
        }
        uMap[A[i]]--;

        if (uMap[A[i+K]] == 0) {
            counter++;
        }
        uMap[A[i+K]]++;
        output.push_back(counter);
    }
    return output;
}