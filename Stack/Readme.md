#Stock span Problem in stack

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    vector<int>price={100,80,60,70,60,75,85};

    vector<int>ans(price.size(),0);
    stack<int>pr;
    for(int i=0;i<price.size();i++){
        while(pr.size()>0 && price[pr.top()]<=price[i]){
            pr.pop();
        }
        if(pr.size()==0){
            ans[i]=i+1;
        }else{
            ans[i]=i- pr.top();
        }
        pr.push(i);
    }
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}
