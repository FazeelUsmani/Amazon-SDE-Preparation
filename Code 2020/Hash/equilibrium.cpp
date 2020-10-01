#include <iostream>
using namespace std;

int main(){
	int t;cin>>t;
while(t--){
    int n;cin>>n;
    if(n==1){
        cout<<"1"<<endl;
        continue;
    }
    
    int a[n];int totsum = 0;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        totsum += a[i]; 
    }
    int presum = 0;int j;
    for(j =0;j<n-1;j++){
        presum += a[j];
        if(presum == totsum - presum -a[j+1])
        {
            cout<<j+2<<endl;
            break;
        }
        
    }
    if(j>n-2){
        cout<<"-1"<<endl;
        break;
    }
}
return 0;
}