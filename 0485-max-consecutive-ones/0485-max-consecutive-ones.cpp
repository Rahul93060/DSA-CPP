class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxe=INT_MIN;
        int st=0;
        int count=0;
        
        while(st<nums.size()){
            if(nums[st] == 1){
                count++;
                maxe= max(maxe,count);
            }else{
                count=0;
            }
           
            st++;
        }
        if(maxe<0){
            return 0;
        }
        return maxe;
    }
};