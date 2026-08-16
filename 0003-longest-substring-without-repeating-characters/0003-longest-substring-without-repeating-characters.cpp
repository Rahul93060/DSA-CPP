class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>ans(256,0);
        int len=0;
        int fir=0;
        int sec=0;

        while(sec<s.size()){

            while(ans[s[sec]]){
                ans[s[fir]] =0;
                fir++;
            }
            ans[s[sec]]=1;
            len = max(len,sec - fir +1);
            sec++;


        }
        return len;
    }
};