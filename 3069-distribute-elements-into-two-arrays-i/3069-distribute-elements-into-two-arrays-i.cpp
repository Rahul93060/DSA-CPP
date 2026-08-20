class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        int fir=0;
        int sec=0;
        int index=2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        while(index<nums.size()){
            
            if(arr1[fir]>arr2[sec]){
                fir++;
                arr1.push_back(nums[index]);
                index++;
            }else{
                sec++;
                arr2.push_back(nums[index]);
                index++;
            }

        }
        vector<int>ans;
        for(int i=0;i<arr1.size();i++){
            ans.push_back(arr1[i]);
        }
         for(int i=0;i<arr2.size();i++){
            ans.push_back(arr2[i]);
        }
        return ans;
    }
};