/*
INTUITION:
Whenever you get these kind of problems. Think in direction of two pointers. 
IF this won't work then come up with brute force then try to optimize time using precomputation


Similar problem:
Maximum Chunks to make sorted-II

*/

int maxIndexDiff(int arr[], int n) 
{ 
    int leftMin[n] = {0};
    int rightMax[n] = {0};
    
    leftMin[0] = arr[0];
    for (int i = 1; i < n; ++i)
        leftMin[i] = min(leftMin[i-1], arr[i]);
        
    rightMax[n-1] = arr[n-1];
    for (int j = n-2; j >= 0; --j)
        rightMax[j] = max(rightMax[j+1], arr[j]);
        
    int i = 0, j = 0, maxDiff = -1;
    
    while (i < n && j < n){
        if (leftMin[i] <= rightMax[j]){
            maxDiff = max(maxDiff, j-i);
            j++;
        }
        else
            i++;
    }
    
    return maxDiff;
}


