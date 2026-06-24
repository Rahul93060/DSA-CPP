class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int n=INT_MIN;
       int idx=0;
       for(int i=0;i<nums.size();i++){
            if(nums[i]>n){
                n=nums[i];
                idx=i;
            }
       }
       return idx;
    }
};