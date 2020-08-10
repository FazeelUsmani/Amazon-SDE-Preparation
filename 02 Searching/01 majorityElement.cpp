
bool isMajority(int a[], int ele, int n){
    
    int cnt = 0;
    for (int i = 0; i < n; ++i){
        if (a[i] == ele){
            cnt++;
        }
    }
    return (cnt > (n/2));
}

int majorityElement(int arr[], int size)
{
    int index = 0, cnt = 0;
    for (int i = 0; i < size; ++i){
        if (arr[index] == arr[i])
            cnt++;
        else
            cnt--;
        if (cnt == 0){
            index = i;
            cnt = 1;
        }
    }
    
    if(isMajority(arr, arr[index], size))
        return arr[index];
    return -1;
}
