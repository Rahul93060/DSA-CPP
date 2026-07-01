class Solution {
public:
    int solve(vector<int>& nums,int idx,int n,vector<int>&dp){
        if(idx>=n){
            return 0;

        }
        if(dp[idx] != -1){
            return dp[idx];
        }
        int take=nums[idx]+solve(nums,idx+2,n,dp);
        int skip=solve(nums,idx+1,n,dp);
        return dp[idx]=max(take,skip);
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        vector<int>dp1(n,-1);
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        int a=solve(nums,0,n-1,dp);
        int b=solve(nums,1,n,dp1);
        return max(a,b);
    }
};