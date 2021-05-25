string convertToRoman(int N){
    string output;
    int value[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string roman[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    for (int i = 0; i<13; i++){
        while (N >= value[i]){
            output += roman[i];
            N = N - value[i];
        }
        if(N==0){
            break;
        }
    }
    return output;
}
