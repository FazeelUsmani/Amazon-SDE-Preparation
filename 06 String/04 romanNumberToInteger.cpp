int romanToDecimal(string s) {
    map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    int output = 0;
    int N = s.size();
    for (int i = 0; i < N-1; ++i){
        if (roman[s[i]] < roman[s[i+1]])
            output = output - roman[s[i]];
        else
            output = output + roman[s[i]];
    }
    output = output + roman[s[N-1]];
    return output;
}