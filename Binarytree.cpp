#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL;

    }

};
static int idx=-1;
Node* buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node* root=new Node(nodes[idx]);
    root->left=buildTree(nodes);
    root->right=buildTree(nodes);
    return root;
}
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);

}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"  ";
}





int main(){
    vector<int> nodes={1,2,-1,-1,5,4,-1,-1,8,-1,-1,6,-1,-1};
    Node* root=buildTree(nodes);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
}