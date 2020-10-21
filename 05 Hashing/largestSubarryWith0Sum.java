int maxLen(int arr[], int n)
    {
       int sum=0;
       int res=0;
       HashMap<Integer,Integer> map=new HashMap<>();
       for(int i=0;i<n;i++){
           sum+=arr[i];
           if(sum==0)
           res=i+1;
           if(map.containsKey(sum))
           res=Math.max(res,i-map.get(sum));
           else
           map.put(sum,i);
       }
       return res;
    }