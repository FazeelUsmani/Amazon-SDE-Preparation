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
    int h[n];
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(a[j]>a[i]){
                h[i] = a[j];
                break;
            }
        h[i] = -1;
        continue;
        }
    }
    h[n-1] = -1;
for(int i = 0;i<n;i++){
    cout<<h[i]<<" ";
}

}