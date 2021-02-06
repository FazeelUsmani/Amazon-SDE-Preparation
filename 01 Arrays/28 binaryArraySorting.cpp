vector<int> SortBinaryArray(vector<int> binArray)
{
    /*
    int cntZero=0, cntOne=0;
    
    for (int x: binArray)
        if (x)
            cntOne++;
        else
            cntZero++;
            
    int i = 0;
    while (i < cntZero) {
        binArray[i++] = 0;
    }
    
    while (i < binArray.size()) {
        binArray[i++] = 1;
    }
    
    return binArray;
    */
    
    int j = -1;
    for (int i = 0; i < binArray.size(); ++i) {
        if (binArray[i] < 1) {
            j++;
            swap(binArray[i], binArray[j]);
        }
    }
    
    return binArray;
    
}
