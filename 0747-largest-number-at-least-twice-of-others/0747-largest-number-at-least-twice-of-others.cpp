class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxe=INT_MIN;
        int sec=INT_MIN;
        int idx=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]> maxe){
                sec=maxe;
                maxe=nums[i];
                idx=i;
            }else if(nums[i]>sec){
                sec=nums[i];
            }
        }
        

        if(maxe>=sec*2){
            return idx;
        }
        return -1;
    }
};