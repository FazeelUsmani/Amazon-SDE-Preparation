int removeDuplicates(int arr[], int n) 
{ 
    if (n==0 || n==1) 
        return n; 
  
    int j = 0; 
    for (int i=0; i < n-1; i++) 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
  
    arr[j++] = arr[n-1]; 
  
    return j; 
} 


vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> ans;
    
    n = removeDuplicates(arr1, n);
    m = removeDuplicates(arr2, m);
    
    int i = 0, j = 0;
    while (i < n && j < m) {
        
         if (arr1[i] < arr2[j]) 
            ans.push_back(arr1[i++]);
  
        else if (arr2[j] < arr1[i]) 
            ans.push_back(arr2[j++]);
  
        else if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i++]);
            j++;
        }
        else { 
            ans.push_back(arr2[j++]);
            i++; 
        }
    }
    
    while (i < n) {
        ans.push_back(arr1[i++]);
    }
    
    while (j < m) {
        ans.push_back(arr2[j++]);
    }
    
    return ans;
    
}
