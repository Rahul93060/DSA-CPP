#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class CircularQueue{
    public:
    int *arr;
    int arrsize,cap;
    int f,r;

    CircularQueue(int size){
        arrsize=0;
        arr=new int[size];
        cap=size;
        f=0;
        r=-1;
        
    }

    void push(int val){
        if(arrsize==cap){
            return;
        }
        r=(r+1)%cap;
        arr[r]=val;
        arrsize++;

    }
     void pop(){
        if(arrsize==0){
            return;
        }
        f=(f+1)%cap;
        arrsize--;
     }
    

    int peek(){
        if(arrsize==0){
            return -1;
        }
        return arr[f];
    }
};

int main(){
    CircularQueue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    
    q.push(6);
    q.pop();
    cout<<q.peek()<<endl;
}


