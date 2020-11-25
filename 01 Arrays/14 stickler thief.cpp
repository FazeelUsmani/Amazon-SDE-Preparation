int FindMaxSum(int arr[],int n){
	//Max_sum can be obained by either sum of even or sum of odd positions.
	int even_sum=0,odd_sum=0;
	for(int i=0;i<n;i++){
		if(i%2==0){//even posiotions like 0,2,4,etc.
			even_sum+=arr[i];
		}else{//odd positions like 1,3,5,etc.
			odd_sum+=arr[i];
		}
	}
	if(even_sum>odd_sum){
		return even_sum;
	}//else
	return odd_sum;
}