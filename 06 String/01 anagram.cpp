int remAnagram(string str1, string str2)
{
    int cnt1[26] = {0}, cnt2[26] = {0};
    
    for (char x: str1) {
        cnt1[x-'a']++;
    }
    for (char x: str2) {
        cnt2[x-'a']++;
    }
    
    int cnt = 0;
    for (int i = 0; i < 26; ++i) {
        if (cnt1[i] == cnt2[i])
            continue;
        if (cnt1[i] < cnt2[i]) {
            cnt += (cnt2[i] - cnt1[i]);
        } else {
            cnt += (cnt1[i] - cnt2[i]);
        }
    }
    
    return cnt;
}
