 public static String smallestWindow(String s, String t){
       if(s==null||t==null)
            return "";
        int letterCount[]=new int [128];
        String res="";
        int left=0,min_len=Integer.MAX_VALUE,count=0;
        for(char c:t.toCharArray())
            ++letterCount[c];
        for(int right=0;right<s.length();right++){
            if(--letterCount[s.charAt(right)]>=0)
                count++;
            while(count==t.length()){
                if(min_len>right-left+1){
                    min_len=right-left+1;
                    res=s.substring(left,right+1);
                }
            if(++letterCount[s.charAt(left)]>0)
                count--;
                left++;
            }
        }
        return res.length()==0?"-1":res;
        }