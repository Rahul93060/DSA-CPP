class Solution {
public:
    int reverse(int x) {
        int a= x;
        long long ans=0;
        while(a != 0){
            int b= a%10;
            
            ans = ans* 10 +b;
            a=a/10;
            if(ans> INT_MAX || ans< INT_MIN){
                return 0;
            }
        }
        
        
        return ans;

    }
};