class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>m;
        for( int a: arr){
        
        if(m.find(a*2) != m.end()){
            return true;
        }

        if(a % 2==0 && m.find(a/2) != m.end()){
            return true;
        }
        m.insert(a);
        
        
        }

        return false;
    }
    
};