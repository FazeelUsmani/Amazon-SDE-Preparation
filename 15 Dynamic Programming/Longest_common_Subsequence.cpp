#include<iostream>
#include<math.h>
using namespace std;

//Dp approach Top Down /Memoization
class Solution{

public:
    int LongestSubsequence_TD(string s1, string s2){
        
        int **dp= new int*[s1.length()+1];
           
         int rows =  s1.size();
         int cols =  s2.size();
         for(int i=0;i<s1.length()+1;i++){
            dp[i]=new int[s2.length()+1];
         }
      
           for(int i=0;i<rows;i++){
               for(int j=0;j<cols;j++){
                   dp[i][j] = -1;
               }
           }

           return Recursive(s1,s2,0,0,dp);
    }   

    int Recursive(string s1, string s2, int i,int j, int **dp  ){
        
       
       if(i> s1.length() - 1 || j>s2.length()-1) return 0;
       
        if(dp[i][j] != -1) return dp[i][j];
        
       if(s1.at(i) == s2.at(j)){
           dp[i][j] = 1 + Recursive(s1,s2,i+1,j+1,dp);
            return dp[i][j] ;
       }  
       else{
             dp[i][j] = max(  Recursive(s1,s2,i,j+1,dp),
               Recursive(s1,s2,i+1,j,dp) );

               return dp[i][j] ;
            
            }

    }


};

    /*
    ]important ]this the best )way )to solve this qns
    i tried 2 ways recursion and top down both does'nt work
       Implementation of bottom up approach with table

        ex: abcde , ade
             
             0   1  2  3  4  5
             []  a  b  c  d  e
       0 []  0   0  0  0  0  0
       1 a   0   1  1  1  1  1
       2 d   0   1  1  1  2  2
       3 e   0   1  1  1  2  3

       here max is 3
       output = 3
    */


   //Dp approach with Dynamic memory
int Longest_common_Subsequence_BU(string s1,string s2){
    int **dp = new int*[ s1.length() + 1 ];

    for(int i=0;i<s1.length() +1;i++){
        dp[i] = new int[s2.length() +1]();
    }

       int rows =  s1.size();
         int cols =  s2.size();

           for(int i=1;i<=rows;i++){
               for(int j=1;j<=cols;j++){
                    if(s1.at(i-1) == s2.at(j-1)){
                        dp[i][j] =  dp[i-1][j-1] +1;
                    } else{
                        dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                    }
               }
           }
       return dp[s1.length()][s2.length()];

}
 //Dp approach without Dynamic memory
int Longest_common_Subsequence_BU_s(string s1,string s2){
      
       int rows =  s1.size();
         int cols =  s2.size();
         
         int dp[rows+1][cols+1];
        
         for(int i=0;i<=rows;i++)
            for(int j=0;j<=cols;j++)
            {
                if(i==0||j==0)
                    dp[i][j]=0;
            }
          
           for(int i=1;i<=rows;i++){
               for(int j=1;j<=cols;j++){
                    if(s1.at(i-1) == s2.at(j-1)){
                        dp[i][j] =  dp[i-1][j-1] +1;
                    } else{
                        dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                    }
               }
           }
       return dp[rows][cols];
       

}


int main(){
    string s1,s2;
    cin>>s1>>s2;
    Solution sol;
    //cout<< sol.LongestSubsequence_TD(s1,s2);
    cout<<Longest_common_Subsequence_BU_s(s1,s2);

    return 0;

}