bool check(string word, string pattern){
    unordered_map<char,int>uMap1;
    unordered_map<char,int>uMap2;
    for(int i=0;i<word.length();i++){
        if(uMap1.find(word[i])!=uMap1.end() && uMap2.find(pattern[i])!=uMap2.end()){
            if(uMap1[word[i]]!=uMap2[pattern[i]]){
                return false;
            }
        }
        else{
            if((uMap1.find(word[i])!=uMap1.end()&&uMap2.find(pattern[i])==uMap2.end())
            || (uMap1.find(word[i])==uMap1.end()&&uMap2.find(pattern[i])!=uMap2.end())){
                return false;
            }
        }
        uMap1[word[i]] = i;
        uMap2[pattern[i]] = i;
    }
    return true;
}
vector<string> findMatchedWords(vector<string> dict, string pattern) {
    vector<string> output;
    for(string word : dict){
        if(word.size()==pattern.size()) {
            if(check(word,pattern)) {
                output.push_back(word);
            }
        }
    }
    return output;
}