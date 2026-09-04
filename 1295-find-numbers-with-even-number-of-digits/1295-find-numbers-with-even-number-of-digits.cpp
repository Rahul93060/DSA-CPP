class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        
        for(int x: nums){
            int total=0;
            while(x>0){
                total++;
                x=x/10;
            }
            if(total%2==0){
                count++;
            }
        }
        return count;
    }
};