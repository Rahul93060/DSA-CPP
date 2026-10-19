class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer>s1=new HashSet<>();
        Set<Integer>s2=new HashSet<>();

        for(int x:nums1){
           s1.add(x);
        }
        for(int x:nums2){
           s2.add(x);
        }
        int[] res = new int[s1.size()];
        int k=0;
        for(int num:s1){
            if(s2.contains(num)){
                res[k] = num;
                k++;
            }
            
        }
        return Arrays.copyOfRange(res,0,k);

    }
}