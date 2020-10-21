#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n<=1){
	        cout<<1<<endl;
	        continue;
	    } else if(n == 2){
	        cout<<2<<endl;
	        continue;
	    }
	    
	    long dp[100];
	    dp[0] = 1;
	    dp[1] = 1;
	    dp[2] = 2;
	    for(int i=3;i<=n;++i){
	        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}