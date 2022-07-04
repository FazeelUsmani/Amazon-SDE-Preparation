def swapPositions(list, pos1, pos2):
     
    list[pos1], list[pos2] = list[pos2], list[pos1]
    return list
 

 # Driver Code
if __name__ == "__main__":
    # Driver function
    List = [23, 65, 19, 90]
    pos1, pos2  = 1, 3
    
    # Swap positions
    print(swapPositions(List, pos1-1, pos2-1))

    # for in range (start inclusive, end exclusive)