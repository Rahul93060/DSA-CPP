class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        // sort(nums.begin(),nums.end());
        // return (nums[n-1]* nums[n-2]) - (nums[0] * nums[1]);
        int a=INT_MIN;
        int b=INT_MIN;
        int c=INT_MAX;
        int d=INT_MAX;
        for(int x:nums){
            if(x>=a){
                b=a;
                a=x;
            }else if(x>b){
                b=x;
            }


            if(x<=c){
                d=c;
                c=x;
            }else if(x<d){
                d=x;
            }
        }
        // return d;
        return (a*b) - (c*d);
    }
};