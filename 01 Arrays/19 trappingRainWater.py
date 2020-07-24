#Complete this function
def trappingWater(arr,n):
  leftMax, rightMax = [0 for i in range(n)],[0 for i in range(n)]
  max1 = 0
  for i in range(0,n):
    if arr[i] > max1:
      max1 = arr[i]
    leftMax[i] = max1

  max2 = 0
  for j in range(n-1,-1,-1):
    if arr[j] > max2:
      max2 = arr[j]
    rightMax[j] = max2

  out = []
  for i in range(n):
    out.append(min(leftMax[i], rightMax[i]) - arr[i])

  return sum(out)
#Initial Template for Python 3

import math



def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            print(trappingWater(arr,n))
            
            
            T-=1


if __name__ == "__main__":
    main()


