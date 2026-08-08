class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        int lon=0;
        if(n==1){
            return 1;
        }
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        bool odd =false;
        for(auto it : freq){
            if(it.second % 2==0){
                lon +=it.second;
            }else{
                lon += (it.second -1);
                odd=true;
            }
        }
        if(odd){
            return lon + 1;
        }
        return lon;
        

    }
};