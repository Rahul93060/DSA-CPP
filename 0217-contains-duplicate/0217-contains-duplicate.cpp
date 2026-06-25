class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        int count=1;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            
            if(m.find(nums[i])!= m.end()){
                return true;
            } 
            m[nums[i]]=count;  
        }
        return false;
        
    }
};