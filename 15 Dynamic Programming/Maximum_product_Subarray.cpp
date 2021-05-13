#include<bits/stdc++.h>
using  namespace std;

/*
Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

Example 1:

Input: [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
*/
class Solution {
public:
      //O(n) O(1)
    int maxProduct(vector<int>& nums) {
        int max_overall = nums[0];
        int max_ending_here = nums[0], min_ending_here = nums[0];
        
        for(int i=1;i<nums.size();i++){
            int temp = max_ending_here;
              max_ending_here = max({ nums[i], nums[i]*max_ending_here, nums[i]*min_ending_here  });
              min_ending_here = min({ nums[i], nums[i]*temp, nums[i]*min_ending_here  });
              max_overall     = max(max_overall  , max_ending_here );
        }
        return max_overall ;
        
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
   cout<<s.maxProduct(v);
    return 0;
}