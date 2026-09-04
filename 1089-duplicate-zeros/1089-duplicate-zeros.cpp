class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size()-1;
        int pos=0;

        for(int i=0;i<=n-pos;i++){
            if(arr[i]==0){
                if(i==n-pos){
                    arr[n]=0;
                    n--;
                    break;
                }
                pos++;
            }

        }

        int newidx = n - pos;


        for(int i = newidx;i>=0;i--){
            if(arr[i]==0){
                arr[i+pos]=0;
                pos--;
                arr[i+pos]=0;
                

            }else{
            arr[i+pos]=arr[i];
            }

        }
    }
};