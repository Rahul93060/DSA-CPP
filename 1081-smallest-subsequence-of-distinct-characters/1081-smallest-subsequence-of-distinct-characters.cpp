class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>freq(26,0);
        vector<bool>used(26,false);
        for(char c: s){
            freq[c - 'a']++;
        }
        string st;

        for(char c: s){
            int index = c - 'a';
            freq[index]--;

            if(used[index]){
                continue;
            }

            while(!st.empty() && st.back() > c && freq[st.back() - 'a']>0){
                used[st.back() - 'a']=false;
                st.pop_back();
            }
            st.push_back(c);
            used[index]=true;

        }

        return st;
    }
};