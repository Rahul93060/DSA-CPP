class Solution {
    public int maxProfit(int[] prices) {
        
        int n=prices.length;
        int ans=Integer.MIN_VALUE;
        int minprice=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i] < minprice){
                minprice=prices[i];
            }
            ans=Math.max(ans,prices[i]- minprice);

        }
        if(ans>=0){
            return ans;
        }
        return 0;
    }
}