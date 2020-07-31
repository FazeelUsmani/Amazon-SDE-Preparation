// NO INTUITION for this problem: you can't create an AHA moment thinking of this solution infront of an interviewer
// Practice is the key

void frequencycount(vector<int>& arr,int n)
{ 
    for (int i = 0; i < n; ++i){
        arr[i] -= 1;
    }
    for (int i = 0; i < n; ++i){
        arr[arr[i] % n] += n;
    }
    for (int i = 0; i < n; ++i){
        arr[i] /= n;
    }
}
