
bool isMajority(int a[], int element, int n){
    
    int count = 0;
    for (int i = 0; i < n; ++i){
        if (a[i] == element){
            count++;
        }
    }
    return (count > (n/2));
}

int majorityElement(int arr[], int size)
{
    int index = 0, count = 0;
    for (int i = 0; i < size; ++i){
        if (arr[index] == arr[i])
            count++;
        else
            count--;
        if (count == 0){
            index = i;
            count = 1;
        }
    }
    
    if(isMajority(arr, arr[index], size))
        return arr[index];
    return -1;
}
