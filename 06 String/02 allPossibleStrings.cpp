string spaceString(string str){
    string output;
    int n = str.length();
    int numOfBits = n-1;
    int numOfOptions = (1 << numOfBits);

    for (int i = 0; i < numOfOptions; i++) {
        for (int j = 0; j < numOfBits; j++) {
            output +=str[j];
            if ((i & (1 << (numOfBits - (j + 1))))) {
                output += (' ');
            }
        }
        output +=str[n-1];
        output+=('$');
    }
    return output;
}


