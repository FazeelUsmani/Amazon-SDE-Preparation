#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a)/sizeof(a[0]);
    int l = a[0];int h = a[n-1];
    for(int i = 0;i<n;i++){
        if(l<=h){
            if(i%2==0)
            {
                a[i] =h;
                h--;
            }
            else{
                a[i] = l;
                l++;
            }
                
        }
    }
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";
}