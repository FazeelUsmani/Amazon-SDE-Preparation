
def largestAndSecondLargest(sizeOfArray, arr):

    max1 = -1
    max2 = -1
    
    for i in arr:
        if i > max1:
            max2 = max1
            max1 = i
        elif i > max2:
            if i != max1:
                max2 = i
            
    
    print (max1, max2)
