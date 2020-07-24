#User function Template for python3
#Complete this function
def convertToWave(arr,n):
    arr.sort()
    for i in range(0,n-1,2):
        arr[i], arr[i+1] = arr[i+1], arr[i]
        
    return arr
#Initial Template for Python 3

import math

def main():
    
    T=int(input())
    
    while(T>0):
        
        
        N=int(input())
        
        A=[int(x) for x in input().split()]
        convertToWave(A,N)
        for i in A:
            print(i,end=" ")
        
        
        print()
        
       
        T-=1

if __name__=="__main__":
    main()
