#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(n==2){
        cout<<"("<<a[0]<<","<<a[1]<<")";
    }
    int p,q;
    int low = 0;
    int high = n-1;
    int min = INT_MAX;
    while(low < high){
            if(abs(a[low] + a[high])<min){
                p = low;
                q = high;
                min = abs(a[low] + a[high]);
            }
            if(min == 0){
                break;
            }
        (abs(a[low] + a[high])<0)? low++:high--;  
    }
cout<<"("<<a[p]<<","<<a[q]<<")";

}
