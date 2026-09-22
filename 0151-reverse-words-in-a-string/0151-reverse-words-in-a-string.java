class Solution {
    public String reverseWords(String s) {
        int left=0;
        int right=s.length()-1;
        while(left<s.length() && s.charAt(left) == ' '){
            left++;
        }
        while(right >0 && s.charAt(right) == ' '){
            right--;
        }
        StringBuilder str = new StringBuilder();

        while(left<=right){
            if(s.charAt(left) != ' '){
                str.append(s.charAt(left));
            }else if(str.charAt(str.length()-1)!= ' '){
                str.append(s.charAt(left));
            }
            left++;
        }

        int i=0,
         j=str.length()-1;

            while(i<j){
                char temp = str.charAt(i);
                str.setCharAt(i,str.charAt(j));
                str.setCharAt(j,temp);
                i++;
                j--;
            }

            int start=0;
            int end=0;
            while(start<str.length()){

                while(end<str.length() && str.charAt(end) != ' '){
                    end++;
                }
                i=start;
                j=end-1;
                while(i<j){
                char temp = str.charAt(i);
                str.setCharAt(i,str.charAt(j));
                str.setCharAt(j,temp);
                i++;
                j--;
            }
            start=end+1;
            end=end+1;

            }

        return str.toString();
    }
}