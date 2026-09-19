class Solution {
public:
    bool isalph(char c){
        return (c>= 'a'  && c<='z') || (c>= 'A' && c<= 'Z') || (c>= '0'  && c<='9');
           
            
            
    }
    bool isPalindrome(string s) {
        
        int i=0;
        int end=  s.size()-1;

        while(i<end){
            
            char a= s[i];
            char b= s[end];

            if(!isalph(a)){
                i++;
                continue;
            }
            if(!isalph(b)){
                end--;
                continue;
            }

            if(tolower(a) != tolower(b)){
                return false;
            }
            i++;
            end--;

        }
        return true;
    }
};