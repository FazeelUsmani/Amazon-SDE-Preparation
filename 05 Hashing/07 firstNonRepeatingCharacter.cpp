string find(string str) {
    unordered_map<char,int>um;
    for(char s : str){
        um[s]++;
    }

    string output = "-1";
    for(char s : str){
        if(um[s]==1){
            output=s;
            break;
        }
    }
    return output;
}