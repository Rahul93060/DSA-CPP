class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int minlen= strs[0].size();

        for(int i=0;i<strs.size()-1;i++){
            string fir=strs[i];
            string sec=strs[i+1];

            int j=0;
            int mini=min(strs[i].size(),strs[i+1].size());
            while(j<mini){
                if(fir[j]!=sec[j]){
                    break;
                }
                j++;
            }
            minlen=min(minlen,j);
        }
        return strs[0].substr(0,minlen);
    }
};