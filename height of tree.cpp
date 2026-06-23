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
int height(Node* root){
    if(root==NULL){
        return 0;

    }
    int lefth=height(root->left);
    int righth=height(root->right);
    return max(lefth,righth)+1;
}
int countnodes(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftcount=countnodes(root->left);
    int rightcount=countnodes(root->right);
    return leftcount+rightcount+1;
}
int sumofnodes(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftsum=sumofnodes(root->left);
    int rightsum=sumofnodes(root->right);
    return leftsum+rightsum+root->data;

}



int main(){
    vector<int> nodes={1,2,-1,-1,5,4,-1,-1,8,-1,-1,6,-1,-1};
    Node* root=buildTree(nodes);
    // preorder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    postorder(root);
    cout<<"Height of tree is: "<<height(root);
    cout<<endl;
    cout<<"total nodes in tree is:"<<countnodes(root);
    cout<<endl;
    cout<<"sum of all nodes in tree:"<<sumofnodes(root);
}