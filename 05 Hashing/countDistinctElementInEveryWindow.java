 ArrayList<Integer> countDistinct(int a[], int n, int k)
    {
        ArrayList<Integer> res= new ArrayList<Integer>();
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int i=0;i<k;i++)
        map.put(a[i],map.getOrDefault(a[i],0)+1);
        res.add(map.size());
        for(int i=k;i<n;i++){
            if(map.get(a[i-k])==1)
            map.remove(a[i-k]);
            else
            map.put(a[i-k],map.get(a[i-k])-1);
            map.put(a[i],map.getOrDefault(a[i],0)+1);
            res.add(map.size());
        }
        return res;
       }