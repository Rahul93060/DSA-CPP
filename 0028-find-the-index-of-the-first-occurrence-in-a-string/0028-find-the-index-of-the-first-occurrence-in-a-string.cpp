class Solution {
public:
    void find_lps(vector<int>& lps,string needle){

        int pre=0;
        int suf=1;
        while(suf<needle.size()){

            if(needle[pre]== needle[suf]){
                lps[suf]=pre+1;
                pre++;
                suf++;
            }else{
                if(pre==0){
                    lps[suf] =0;
                    suf++;
                }else{
                    pre=lps[pre-1];
                }
            }
        }
    }
    int strStr(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        find_lps(lps,needle);

        int first=0;
        int sec=0;

        while(first<haystack.size()  && sec<needle.size() ){

            if(haystack[first]==needle[sec]){
                first++;
                sec++;
            }else{
                if(sec==0){
                    first++;
                }else{
                    sec=lps[sec-1];
                }
            }
        }
        if(sec == needle.size()){
            return first-sec;
        }else{
            return -1;
        }
    }
};