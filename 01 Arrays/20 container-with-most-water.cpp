long long maxArea(long long A[], int len)
{    
    int left = 0, right = len-1;
    long long area = 0;
    
    while (left < right) {
        area = max(area, min(A[left], A[right]) * (right - left));
        if (A[left] < A[right]) left++;
        else    right--;
        
    }
    
    return area;
}
