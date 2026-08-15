class Solution {
public:
    string sortVowels(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='i' || s[i]=='e' || s[i]=='o' || s[i]=='u'){
                lower[s[i]-'a']++;
                s[i]='#';
            }
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                upper[s[i]-'A']++;
                s[i]='#';
            }
        }
         for(int i=0;i<26;i++){

            char c='A' +i;
            while(upper[i]){
                ans +=c;
                upper[i]--;
            }

            
        }
        for(int i=0;i<26;i++){
        char c='a' +i;
            while(lower[i]){
                ans +=c;
                lower[i]--;
            }
        }

        int sec=0;
        int fir=0;
        while(sec < ans.size()){
            if(s[fir]=='#'){
                s[fir] =ans[sec];
                sec++;
            }
            fir++;
        }
        return s;
    }
};