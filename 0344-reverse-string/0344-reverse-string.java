class Solution {
    public void reverseString(char[] s) {
        int i=0;
        int b=s.length-1;
        while(i < b){
            char temp=s[b];
            s[b]=s[i];
            s[i]=temp;
            i++;
            b--;


        }
    }
}