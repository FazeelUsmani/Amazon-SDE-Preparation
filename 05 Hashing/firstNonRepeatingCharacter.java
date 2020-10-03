 public static String find(String s)
    {
     int letterCount[]=new int[128];
     for(char c:s.toCharArray())
     ++letterCount[c];
  int ans=-1;
    for(int i=0;i<s.length();i++){
        if(letterCount[s.charAt(i)]==1){
            ans=i;
            break;
        }
    }
    if (ans!=-1)
    return String.valueOf(s.charAt(ans));
    return "-1";
    }