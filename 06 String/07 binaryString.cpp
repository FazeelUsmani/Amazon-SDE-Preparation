int binarySubstring(int n, string str){
    int output = 0;
    for(char c : str) {
        if (c == '1') {
            output++;
        }
    }
    return output*(output-1)/2;
}