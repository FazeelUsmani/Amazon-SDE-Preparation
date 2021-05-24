string smallestWindow(string S, string P) {
    int uMap[256] = { 0 };
    int counter =0;
    int start =0;
    int minStart =0;
    int minLen=S.length()+1;
    for(auto c : P) {
        uMap[c]++;
        counter++;
    }

    for(int end=0; end<S.length(); end++){
        if(uMap[S[end]]>0){
            counter--;
        }
        uMap[S[end]]--;

        while(counter==0){
            if(end-start+1<minLen){
                minStart=start;
                minLen = end-start+1;
            }
            uMap[S[start]]++;
            if(uMap[S[start]]>0) {
                counter++;
            }
            start++;
        }
    }
    if(minLen!=S.length()+1){
        return S.substr(minStart,minLen);
    }
    return "-1";
}