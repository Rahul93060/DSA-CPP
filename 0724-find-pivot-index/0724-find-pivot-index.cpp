class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total =0;
        for(int x: nums){
            total+=x;
        }

        int leftsum=0;
        for(int i=0;i<nums.size();i++){
            if(leftsum == total-nums[i]){
                return i;
            }
            leftsum+=nums[i];
            total = total - nums[i];

        }
        return -1;
    }
};
