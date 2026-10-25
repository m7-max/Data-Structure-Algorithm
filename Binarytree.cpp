#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node*parent;
    Node(int val){
        data=val;
        parent=NULL;
        left=right=NULL;
    }
};
void Binarytree(Node*root){
    cin>>root->data;
    cout<<"Left ? right?\n";
    int l,r;
    cout << "Does " << root->data << " have a left child? (1 for yes, 0 for no): ";
    int l;
    cin>>l;
    if(l==1){
        root->left=new Node(0);
        root->left->parent=root;
        Binarytree(root->left);
    }
    else{
        root->left==NULL;
    }
    cout << "Does " << root->data << " have a right child? (1 for yes, 0 for no): ";
    int l;
    cin>>r;
    if(r==1){
        root->right = new Node(0);
        root->right->parent=root;
        Binarytree(root->right);
    }
    else{
        root->right=NULL;
    }
}

void inorder(Node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right); 
}
int main(){
    Node* root =new Node(0);
    Binarytree(root);
    inorder(root);
}
