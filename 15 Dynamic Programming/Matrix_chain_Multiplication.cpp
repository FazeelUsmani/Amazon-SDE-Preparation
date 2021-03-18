#include<bits/stdc++.h>
#include<vector>
#include<climits>
using namespace std;

class Solution{

public:
  int Matrix(vector<int> &A){
     int dp[200][200];
     memset(dp,0,sizeof dp);
     int n = A.size()-1;
     for(int i=1;i<n;i++){
        int r = 0, c = i;
        while(c<n){
           int val = INT_MAX;
           for(int pivot = r;pivot < c;pivot++){
               val = min(val,dp[r][pivot] + dp[pivot+1][c] + A[r] + A[pivot+1] + A[c+1] );
    
           }
           dp[r][c] = val;
           r++, c++;
        }
     }
         return dp[0][n-1];
  }
};

int main(){
    
    Solution s;
   vector<int> v;
   int n;cin>>n;
   for(int i=0;i<n;i++){
     int x;cin>>x;
     v.push_back(x);
   }
   
  cout<< s.Matrix(v);
    return 0;
}