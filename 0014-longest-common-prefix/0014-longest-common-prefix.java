class Solution {
    public int getCommon(String s1,String s2){

        if(s1.length() == 0 ||  s2.length() == 0){
            return 0;
        }

        if(s1.length() > s2.length()){
            return getCommon(s2,s1);
        }
        int count=0;
        for(int i=0;i<s1.length();i++){
            if(s1.charAt(i) != s2.charAt(i)){
                return count;
            }
            count++;
        }
        return count;
    }
    public String longestCommonPrefix(String[] strs) {
        
        if(strs == null || strs.length == 0){
            return  "";
        }

        int minCount = Integer.MAX_VALUE;

        String first = strs[0];
        if(strs.length == 1){
            return strs[0]; 
        }

        for(int i=1; i< strs.length; i++){
            int count =getCommon(first,strs[i]);

            minCount=Math.min(minCount, count);
        }

        return first.substring(0,minCount);
    }
}