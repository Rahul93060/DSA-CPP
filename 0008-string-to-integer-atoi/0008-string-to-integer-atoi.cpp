class Solution {
public:
    bool isdigit(char a){
        return a>= '0' && a<='9';
    }
    int myAtoi(string s) {
        int i=0;
        long long num=0;
        int sign =1;

        while(i<s.size() && s[i] == ' '){
            i++;
        }
        if(i< s.size()){
        if(s[i]=='-'){
            sign= -1;
            i++;
        }else if(s[i]=='+'){
            i++;
        }
        }

        while(i<s.size() && isdigit(s[i])){
            int digit = s[i] - '0';
            
            num=num*10+digit;
             if (sign == 1 && num > INT_MAX) {
                return INT_MAX;
            }

            if (sign == -1 && -num < INT_MIN) {
                return INT_MIN;
            }
            i++;
        }
        return num*sign;

    }
};