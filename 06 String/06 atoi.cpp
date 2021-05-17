int atoi(string str){
    int output=0;
    for(char i : str){
        if (!isdigit(i)){
            return -1;
        }
        output = output * 10 + (i - '0');
    }
    return output;
}