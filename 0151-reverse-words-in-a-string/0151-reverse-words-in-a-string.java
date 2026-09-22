class Solution {
    public String reverseWords(String s) {
        // approch 1 : trim , split on " " ten reverse then use the join function 
        String strimed= s.trim();
        String[] str=strimed.split("\\s+");
        List<String> liststr = Arrays.asList(str);
        Collections.reverse(liststr);
        return String.join(" ",liststr);
    }
}