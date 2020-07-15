
/*you are required to complete this method*/
int convertFive(int n) {
    
    int mul = 1, ans = 0, last;
    
    while (n > 0){
        
        last = n%10;
        n /= 10;
        
        if (last == 0)
            ans = mul*5 + ans;
        else
            ans = mul*last + ans;
            
        mul *= 10;
    }
    
    return ans;
}
