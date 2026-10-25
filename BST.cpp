#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node* parent;
    Node(int value){
        left=right=NULL;
        parent=NULL;
        data=value;
    }
};
void insertBST(Node*& root, int val, Node* parentPtr = NULL) {
    if (root == NULL) {
        root = new Node(val);
        root->parent = parentPtr;
        return;
    }
    if (val < root->data) {
        insertBST(root->left, val, root);
    } else {
        insertBST(root->right, val, root);
    }
}

void CreateBST(Node*&root,vector<int>arr){
    for(int i=0;i<arr.size();i++){
        insertBST(root,arr[i]);
    }
}
Node* BinarySearch(Node*root,int val){
    if(root==NULL||val==root->data){
        return root;
    }
    else if(val>root->data){
        return BinarySearch(root->right,val);
    }
    else{
        return BinarySearch(root->left,val);
    }
}

void Delete(Node*&root,int val){
    Node*curr= BinarySearch(root,val);
    if (curr == NULL) {
        cout << "Value not found in BST!\n";
        return;
    }
    // No child
    if(curr->left==NULL&& curr->right==NULL){
        if (curr->parent == NULL) { // Deleting root node
            root = NULL;
        }
        else if (curr == curr->parent->right) { // FIX: Check node position, not data
            curr->parent->right = NULL;
        } 
        else {
            curr->parent->left = NULL; // FIX: Corrected left pointer update
        }
        delete curr;
    }
    // 2 child
    else if(curr->left!=NULL && curr->right!=NULL){
        Node *next= curr->right;
        while(next->left!=NULL){
            next=next->left;
        }
        curr->data=next->data;
        Node*child=next->right;
        if (next->parent->left == next) {
            next->parent->left = child;
        } else {
            next->parent->right = child;
        }
        
        if (child != NULL) {
            child->parent = next->parent;
        }
        delete next;
    }
    // Single child
    else if(curr->right!=NULL){
        Node* child= curr->right;
        if(curr->parent==NULL){
            // child=curr;
            root = child;
            child->parent = NULL;
        }
        else{
            child->parent=curr->parent;
            if(curr == curr->parent->right){
            // curr->parent->left=child;
            curr->parent->right=child;
            }
            else{
            curr->parent->left=child;          
            }
        }
        delete curr;
    }
    //One child
    else if(curr->left!=NULL){
        Node* child= curr->left;
        if(curr->parent==NULL){
            // child=curr;
            root = child;
            child->parent = NULL;
        }
        else{
            child->parent=curr->parent;
            //check if curr is left child or right child
            if(curr == curr->parent->right){
            // curr->parent->left=child;
            curr->parent->right=child;
            }
            else{
            curr->parent->left=child;
            }
        }
        delete curr;
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

int main() {
    Node* root = NULL;
    
    // Vector of elements to insert into the BST
    vector<int> elements = {50, 30, 70, 20, 40, 60, 80};
    
    CreateBST(root, elements);
    
    cout << "Inorder traversal of original BST: ";
    inorder(root);
    cout << endl;

    // Test searching
    int searchVal = 40;
    Node* foundNode = BinarySearch(root, searchVal);
    if (foundNode != NULL) {
        cout << "Found " << searchVal << " in the BST!\n";
    } else {
        cout << searchVal << " not found.\n";
    }

    // Test deletion (deleting a node with a single child or no child)
    cout << "\nDeleting 20 (node with no children)...\n";
    Delete(root, 20);
    
    cout << "Inorder traversal after deleting 20: ";
    inorder(root);
    cout << endl;

    // Test deletion of a node with two children
    cout << "\nDeleting 30 (node with two children)...\n";
    Delete(root, 30);
    
    cout << "Inorder traversal after deleting 30: ";
    inorder(root);
    cout << endl;

    return 0;
}