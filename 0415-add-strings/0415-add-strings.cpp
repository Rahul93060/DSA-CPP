class Solution {
public:


    string adds(string num1,string num2){
        string ans;
        int carry=0;
        int a=num1.size()-1;
        int b=num2.size()-1;
        int sum=0;
        while(b>=0){
            sum = (num1[a] - '0')+ (num2[b]- '0') +carry;
            carry = sum/10;
            char c = '0'+ sum %10;
            ans+=c;
            b--;
            a--;

        }
        while(a>=0){
             sum = (num1[a] - '0')+carry;
            carry = sum/10;
            char c = '0'+sum%10;
            ans+=c;
            a--;
        }
        if(carry)
        ans += '1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string addStrings(string num1, string num2) {
        
     
        
        if(num1.size()>num2.size()){
            return adds(num1,num2);
        }
        return adds(num2,num1);
        
    }
};