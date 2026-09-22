class Solution {
    public String reverseWords(String s) {
        int start=0;
        int end=s.length();

        StringBuilder str = new StringBuilder();
        while(start<end){
            str.append(s.charAt(start));
            start++;
        }
        int i=0;
        int j=0;
        while(i<str.length()){

            while(j<str.length() && str.charAt(j) != ' '){
                j++;
            }

            start= i;
            end=j-1;

            while(start < end){
                char temp= str.charAt(start);
                str.setCharAt(start,str.charAt(end));
                str.setCharAt(end,temp);
                start++;
                end--;
                
            
            }
            i=j+1;
            j=j+1;

        }
        return str.toString();
    }
}