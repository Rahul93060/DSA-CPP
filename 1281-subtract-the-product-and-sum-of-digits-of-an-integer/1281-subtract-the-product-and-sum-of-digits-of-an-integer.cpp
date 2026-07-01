class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int pro=1;
        while(n>0){
            int s=n%10;
            sum=sum+s;
            pro=pro*s;
            n=n/10;
        }
        return pro-sum;
    }
};