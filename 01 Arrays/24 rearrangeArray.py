def arrange(arr, n): 
    
    for i in range(n):
        arr[i] += (arr[arr[i]] % n) * n
        
    for i in range(n):
        arr[i] //= n
        
    return arr
