class Solution {
public:
    string sortSentence(string s) {
        int n=s.size();
        vector<string>freq(10);
        string temp;
        int count=0;
        for(int i=0;i<n;i++){
            
            if(s[i]==' '){
                int pos = temp[temp.size()-1]-'0';
                temp.pop_back();
                freq[pos]=temp;
                temp.clear();
                count++;
            }else{
                temp+=s[i];
            }
        }
         int pos = temp[temp.size()-1]-'0';
                temp.pop_back();
                freq[pos]=temp;
                temp.clear();
                count++;
        
        for(int i=1;i<=count;i++){
            temp +=freq[i];
            temp += " ";
        }
        temp.pop_back();
        return temp;

    }
};