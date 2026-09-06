class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxe=-1;
        for(int i=arr.size()-1;i>=0;i--){
            int temp = arr[i];
            arr[i]=maxe;
            maxe = max(temp,maxe);
        }
        return arr;

    }
};