class Solution {
public:
    long long sumAndMultiply(int n) {
        int count=0;
        int sum=0;
        long long num=0;
        while(n>0){
            int h=n%10; 
            sum=sum+h;
            if(h!=0){
                num=num+h* pow(10,count++);
            }
            n=n/10;
        }
        return sum* num;
    }
};