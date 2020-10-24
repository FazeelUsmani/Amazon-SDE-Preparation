#include<iostream>
using namespace std;

   //O(n) O(n)
int MaxSum(int arr[],int n){

    int dp[100] = {0};
    dp[0] = arr[0] > 0 ? arr[0] : 0;

    int max_s0_far = dp[0];
    for(int i=1;i<n;i++){
        dp[i] = dp[i-1] + arr[i];
        if(dp[i] < 0){
            dp[i] = 0;
        }
        max_s0_far = max(dp[i], max_s0_far);

    }
  
     return max_s0_far;

}

  //Space optimised code

   //Kadane's Algorithm
    //O(n) O(1)
   int MaxSum_II(int arr[],int n){
      int current_sum = 0;
      int max_so_far = 0;

      for(int i=0;i<n;i++){
         current_sum += arr[i];
         if(current_sum<0) current_sum = 0;
         max_so_far = max(current_sum,max_so_far);
      }
      return max_so_far;
   }


int main(){
     int arr[100] = {-3,2,5,-1,6,3,-2,7,-5,2};
     int n = sizeof(arr) / sizeof(int);
    
     cout<<MaxSum(arr,n)<<endl;
     cout<<MaxSum_II(arr,n);
    
    return 0;
}