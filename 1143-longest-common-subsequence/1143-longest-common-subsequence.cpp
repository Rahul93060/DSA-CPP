class Solution {
public:

    int lcs(string &s,string &t ,int i,int j,vector<vector<int>>&dp){
        if(i==s.size() || j== t.size()) return 0;

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        if(s[i]== t[j]){
            return dp[i][j]= 1+ lcs(s,t,i+1,j+1,dp);

        }else{
            return dp[i][j]= max(lcs(s,t,i+1,j,dp),lcs(s,t,i,j+1,dp));
        }
    }

    int longestCommonSubsequence(string text1, string text2) {
        int rows=1001;
        int cols=1001;
        vector<vector<int>> dp(rows, vector<int>(cols, -1));
        return lcs(text1,text2,0,0,dp);
    }
};