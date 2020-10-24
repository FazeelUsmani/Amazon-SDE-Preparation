#include<bits/stdc++.h>
using namespace std;

/*
Given an unsorted array of integers, find the length of longest increasing subsequence.

Example:

Input: [10,9,2,5,3,7,101,18]
Output: 4 
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4. 

*/
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
          if(n==0) return 0;
          v[0] = 1; //isse bura nh ho skta yha 1 length to hoga hi
      
        for(int i=1;i<n;i++){
           v[i] =1;
             for(int j=0;j<i;j++){
                  if(nums[i] > nums[j] && v[i] < v[j]+1) v[i] = v[j]+1;
             } 
        }
        return *max_element(v.begin(), v.end());
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
   cout<<s.lengthOfLIS(v);
    return 0;
}