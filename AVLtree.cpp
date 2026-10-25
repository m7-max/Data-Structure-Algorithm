#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
    int height;
    Node(int value){
        val= value;
        left=right=NULL;
        parent=NULL;
        height=0;
    }
};

int get_height(Node* root){
    if(root==NULL){
        return -1;
    }
    return root->height;
}

int Balance_factor(Node*root){
    return get_height(root->left) - get_height(root->right);
} 


Node* right_rotate(Node* root){
    Node* child= root->left;
    Node* T3=child->right;
    root->left=T3;
    child->right=root;
    if(T3!=NULL){
        T3->parent=root;
    }
    child->parent=root->parent;
    root->parent=child;
    if(child->parent!=NULL){
        if(child->parent->left==root){
            child->parent->left=child;
        }
        else{
            child->parent->right=child;
        }
    }
    root->height=1+max(get_height(root->left),get_height(root->right));
    child->height=1+max(get_height(child->left),get_height(child->right));
    return child;
}


Node* left_rotate(Node*root){
    Node* child=root->right;
    Node* T3= child->left;
    child->left=root;
    root->right=T3;
    if(T3!=NULL){
        T3->parent=root;
    }
    child->parent=root->parent;
    root->parent=child;
    if(child->parent!=NULL){
        if(child->parent->left==root){
            child->parent->left=child;
        }
        else{
            child->parent->right=child;
        }
    }
    root->height= 1+max(get_height(root->left),get_height(root->right));
    child->height= 1+max(get_height(child->left),get_height(child->right));
    return child;
}


Node* balance(Node*root){
    int BF=Balance_factor(root);
    if(BF>1){
        if(Balance_factor(root->left)<0){
            root->left=left_rotate(root->left);
            return right_rotate(root);
        }
        else{
            return right_rotate(root);
        }
    }
    else if(BF<-1){
        if(Balance_factor(root->right)>0){
            root->right=right_rotate(root->right);
            return left_rotate(root);
        }
        else{
            return left_rotate(root);
        }
    }
    return root;
}


Node* insert(Node*root,int val){
    if(root==NULL){
        Node* newNode= new Node(val);
        root= newNode;
        return root;
    }
    if(root->val>val){
        root->left=insert(root->left,val);
    }
    else if(root->val<val){
        root->right=insert(root->right,val);
    }
    else{
        return root;
    }
    root->height=1 + max(get_height(root->left), get_height(root->right));
    return balance(root);
}

void inorder_traverse(Node*root){
    if(root==NULL){
        return ;
    }
    inorder_traverse(root->left);
    cout<<(root->val)<<" ";
    inorder_traverse(root->right);
}


int main(){
    vector<int>arr={12,34,26,13,54};
    Node*root=NULL;
    for(int i=0;i<arr.size();i++){
        root=insert(root,arr[i]);
    }
    inorder_traverse(root);
    };

