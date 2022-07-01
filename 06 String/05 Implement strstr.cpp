int strstr(string s,string x){
    for(int i=0; i<=s.size()-x.size(); i++){
        if(s.substr(i,x.size())==x)
            return i;
    }
    return -1;
}
