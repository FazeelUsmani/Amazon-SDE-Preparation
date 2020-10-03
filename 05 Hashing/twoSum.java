public boolean keypair(int[] a, int n, int target)
    {
        int l=0;
        int r=n-1;
        HashSet<Integer> set=new HashSet<>();
        for(int i=0;i<n;i++){
            int temp=target-a[i];
            if(set.contains(temp))
            return true;
            else
            set.add(a[i]);
        }
        return false;
    }