#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {-1, 3, -5, 6, 3, 6, -7, -4, -9, 10};
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);int l = 0;int h;
    for(int i = 0;i<n;i++)
       {
           if(a[i] >0)
           {
               h = i;
               break;
           }
       } 
           while(l<h && h<n){
            if(l%2 !=0 && a[l]<0){
                if(a[h]>0){
                    swap(a[l],a[h]);
                    h++;
                }
            }
            l++;
        }
        for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";
    }
