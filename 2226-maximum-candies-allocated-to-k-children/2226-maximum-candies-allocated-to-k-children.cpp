class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        
        int n=candies.size();
        int maxc=0;
        for(int i=0;i<n;i++){
            if(candies[i]>maxc){
                maxc=candies[i];
            }
        }
        
        int st=1;
        int end=maxc;
        long long count=0;
       int ans=0;
        while(st<=end){
            count=0;
            int mid=(st+end)/2;
            for(int i=0;i<n;i++){
                count=count+candies[i]/mid;
            }
            if(count>=k){
                ans=mid;
                st=mid+1;
            }else{
                end=mid-1;
            }
            
        }
        return ans;
        

        
    }
};