class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>alp(26,0);
        if(s.size()  != t.size()){
            return false;
        }

        for(int i=0;i<s.size();i++){
            int a= s[i] - 'a';
            alp[a]++;
        }

        for(int i=0;i<t.size();i++){
            int b= t[i] - 'a';
            alp[b]--;
        }
        for(int i=0;i<26;i++){
            if(alp[i]!=0){
                return false;
            }
        }
        return true;
    }
};