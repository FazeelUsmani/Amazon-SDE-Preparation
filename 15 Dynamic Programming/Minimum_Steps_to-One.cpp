#include<iostream>
#include<climits>
using namespace std;

//minimum steps to one
int Steps_toOne(int n, int dp[]){  //top down approach
    //base case
    //O(n)
    if(n == 1 ){
     return 0; 
    }

    // Rec case
    //lookup if n is already computed
    if(dp[n] != 0){
        return dp[n];
    }

    //Rec case
    int op1,op2,op3;
    op1 = op2= op3 = INT_MAX;
    if(n  % 3 == 0){
       op1 = Steps_toOne(n/3, dp)+ 1;
    }
    if(n  % 2 == 0){
        op2 = Steps_toOne(n/2, dp) + 1;
    }
    op3 = Steps_toOne(n-1 ,dp) + 1;
   
   int ans = min(min(op1, op2), op3);
   return dp[n] = ans;

    
}
//Now we will see bottom up approach

int MinstepBU(int n){
    int dp[1000] = {0};

    dp[1] = 0;

    for(int i = 2; i <= n ; i++){
        int op1, op2, op3;
        op1 = op2 = op3 = INT_MAX;
        if(n%3 == 0){
           op1 = dp[i/3];
        }
        if(n%2 == 0){
           op2= dp[i/2];
        }
        op3 = dp[i-1];

        dp[i]  = min(min(op1, op2), op3) + 1;        
    }
    return dp[n];


}
int main(){
    
    int n;
    cin>>n;
    int dp[1000] = {0};

    //cout<<Steps_toOne(n,dp);

    //or

    //Bottom up 
    cout<<MinstepBU(n);
    return 0;
}