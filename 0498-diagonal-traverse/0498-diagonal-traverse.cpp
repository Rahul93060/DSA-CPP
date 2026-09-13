class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m= mat.size();
        int n=mat[0].size();
        vector<int>ans(m*n);
        int colidx=0;
        int rowidx=0;
        int k=0;
        int dir=1;

        while(k<m*n){
            ans[k]=mat[rowidx][colidx];
            k++;

            int newrowidx = dir ==1 ? rowidx -1 : rowidx+1;
            int newcolidx = dir==1 ? colidx+1: colidx-1;


            if( newrowidx < 0 || newcolidx <0 || newrowidx > (m-1) || newcolidx > (n-1) ){
                if(dir==1){
                    if(colidx==n-1){
                        rowidx++;
                    }else{
                        colidx++;
                    }
                }else{
                    if(rowidx==m-1){
                        colidx++;
                    }else{
                        rowidx++;
                    }
                }
                dir = -1* dir;
            }else{
                colidx=newcolidx;
                rowidx=newrowidx;
            }



        }
        return ans;
    }
};