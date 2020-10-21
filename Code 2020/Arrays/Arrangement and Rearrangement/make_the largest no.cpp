#include<bits/stdc++.h>
using namespace std;
int main(){
    string a[] = {"1", "34", "3", "98", "9", "76", "45", "4"}; 
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i < n-1; i++){
       for( int j = i+1; j < n; ++j)
       {
          string x = a[i];
          string y = a[j];
          if(x.append(y) < y.append(x))
            swap(a[i],a[j]);
          }
       }    
    for(int i = 0;i<n;i++)
    cout<<a[i];
}    