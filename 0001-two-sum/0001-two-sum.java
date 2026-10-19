class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        Map<Integer,Integer> ans = new HashMap<>();

        for(int i=0;i<nums.length;i++){
            ans.put(nums[i],i);
        }

        for(int i=0;i<nums.length;i++){
            int num=target -nums[i];
            if(ans.containsKey(num) && ans.get(num) != i){
                return new int[] {
                    ans.get(num),i
                };
            }
        }
        return new int[] {-1,-1};
    }
}