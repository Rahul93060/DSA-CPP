class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int i=n-1;
        int st=0;
        int end = n-1;
        while(i>=0){
            int val;
            if(abs(nums[end])> abs(nums[st])){
                val = nums[end];
                end--;
                
            }else{
                val = nums[st];
                st++;
                
            }
            ans[i] = val* val;
            i--;
        }
        return ans;

    }
};