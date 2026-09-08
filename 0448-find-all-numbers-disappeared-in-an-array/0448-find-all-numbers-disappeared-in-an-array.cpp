class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int st=0;
        int n=nums.size();
        while(st<n){
            int curr= abs(nums[st]);
            int idx = curr-1;

            // if(nums[idx]<0){
            //     continue;
            // }
            nums[idx] = -abs(nums[idx]);
            st++;
        }
        vector<int>result;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                result.push_back(i+1);
            }
        }
        return result;
    }
};