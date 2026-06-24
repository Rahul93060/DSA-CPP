#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr={1,3,45,6,7,32,5,7,80,76};
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";

    }
    int target=32;
    int st=0;
    int end=arr.size()-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==target){
            cout<<"Element Found at index "<<mid;
            break;
        }
        else if(arr[mid]<target){
            st=mid+1;
        }
        else{
            end=mid+1;
        }
    }
}
