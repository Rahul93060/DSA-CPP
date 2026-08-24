class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>m1;
        for(int i=0;i<nums1.size();i++){
            
            m1.insert(nums1[i]);
        }
        vector<int>ans;
        for(int x:nums2){
            if(m1.find(x) != m1.end()){
                ans.push_back(x);
                m1.erase(x);
            }
        }
        return ans;
        
    }
};