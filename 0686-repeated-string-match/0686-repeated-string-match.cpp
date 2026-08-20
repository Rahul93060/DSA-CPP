class Solution {
public:
    void lsp_find(vector<int>&lsp,string b){
        int suf=1;
        int pre=0;
        while(suf<b.size()){

            if(b[pre]== b[suf]){
                lsp[suf] = pre+1;
                suf++;
                pre++;
            }else{
                if(pre==0){
                    lsp[suf]=0;
                    suf++;

                }else{
                    pre=lsp[pre-1];
                }
            }

        }
    }
    int kmp_match(string a,string b){
        vector<int>lsp(b.size(),0);
        lsp_find(lsp,b);
        int fir=0;
        int sec=0;
        while(fir<a.size() && sec<b.size()){
            if(b[sec]==a[fir]){
                sec++;
                fir++;
            }else{
                if(sec==0){
                    fir++;
                }else{
                    sec=lsp[sec-1];
                }
            }
            
        }
        if(sec==b.size()){
                return 1;
            }
                return -1;
            
    }
    int repeatedStringMatch(string a, string b) {
        
        if(a==b){
            return 1;
        }
            int repeat=1;
            string temp=a;

            while(temp.size()< b.size()){
                temp+=a;
                repeat++;
            }

            
        
        if(kmp_match(temp,b)==1){
                return repeat;
            }

            if(kmp_match(temp+a,b)==1){
                return repeat+1;
            }
            return -1;
    }
};