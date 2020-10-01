#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;cin>>n;
    int a[n];
    int sumarr = 0;
    int res_org = 0;
    cout<<"Enter the elements of the array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        sumarr = sumarr + a[i];
        res_org += i * a[i];
    }
    int tempsum = res_org;
    int maxsum = res_org;
    for(int i =1;i<n;i++){
        tempsum = tempsum + n*a[i-1] - sumarr;
        if(tempsum > maxsum){
            maxsum = tempsum;
        }
    }
    cout<<"The largest sum is: "<<maxsum;
}    