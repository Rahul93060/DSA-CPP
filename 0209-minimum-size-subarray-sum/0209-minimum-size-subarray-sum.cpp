class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int i=0;
        int sum=0;
        int count = INT_MAX;
        for(int j=0;j<nums.size();j++){
            sum += nums[j];

            while(sum>=target){
                count=min(count,j-i+1);
               
                sum=sum-nums[i];
                 i++;
            }
        }

        return count == INT_MAX ? 0:count;
    }
};