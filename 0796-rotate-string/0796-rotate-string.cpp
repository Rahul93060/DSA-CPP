class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=goal.size();
        for(int i=0;i<goal.size();i++){

            if(s==goal){
                return true;
            }
            char s=goal[n-1];
            for(int j=n-1;j>0;j--){
                goal[j]=goal[j-1];
            }
            goal[0]=s;
        }
        return false;
    }
};