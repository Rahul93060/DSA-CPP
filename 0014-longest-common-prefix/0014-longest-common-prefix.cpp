class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minlen=strs[0].size();
        for(string str:strs){
            minlen=min(minlen,(int)str.size());
        }
         for (int i = 0; i < minlen; i++) {

            for (int j = 1; j < strs.size(); j++) {

                if (strs[0][i] != strs[j][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }

        return strs[0].substr(0, minlen);
    }
    
};