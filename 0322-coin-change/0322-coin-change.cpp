class Solution {
public:
    int solve(vector<int>& coins,int amount,vector<int>& dp){
        if(amount==0){
            return 0;
        }
        if(amount<0){
            return INT_MAX;
        }

        
        if(dp[amount]!=-1){
            return dp[amount];
        }
        int ans=INT_MAX;
        for(int coin:coins){
            int res=solve(coins,amount-coin,dp);

            if(res!=INT_MAX){
                ans=min(res+1,ans);
            }
            
            
        }
        dp[amount]=ans;
        return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int>dp(amount+1,-1);
        int result=solve(coins,amount,dp);   
        if(result==INT_MAX){
            return -1;
        }else{
            return result;
        }
    }
};