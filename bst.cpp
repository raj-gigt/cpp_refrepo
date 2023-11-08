#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to insert a new element into the BST
Node* insertIntoBST(Node* root, int value) {
    // If the tree is empty, create a new node and return it
    if (root == nullptr) {
        return new Node(value);
    }

    // If the value to be inserted is less than the root, insert it into the left subtree
    if (value < root->data) {
        root->left = insertIntoBST(root->left, value);
    }
    // If the value to be inserted is greater than the root, insert it into the right subtree
    else if (value > root->data) {
        root->right = insertIntoBST(root->right, value);
    }

    // Return the updated root
    return root;
}
Node* searchInBST_R(Node* root, int value) {
    // Base cases: if the tree is empty or the value is found
    if (root == nullptr || root->data == value) {
        return root;
    }

    // If the value to be searched is smaller, search in the left subtree
    if (value < root->data) {
        return searchInBST_R(root->left, value);
    }
    // If the value to be searched is larger, search in the right subtree
    else {
        return searchInBST_R(root->right, value);
    }
}
Node* searchInBST_N(Node* root, int value) {
    // Iterate through the BST using a while loop
    while (root != nullptr) {
        // If the current node contains the target value, return the node
        if (root->data == value) {
            return root;
        }
        // If the target value is smaller, move to the left child
        else if (value < root->data) {
            root = root->left;
        }
        // If the target value is larger, move to the right child
        else {
            root = root->right;
        }
    }
    // If the value is not found, return nullptr
    return nullptr;
}
int main(){
    int bst_size;
    cin>>bst_size;
    int arr[bst_size];
    Node* root=nullptr;
    cin>>arr[0];
    root=insertIntoBST(root,arr[0]);
    for(int i=1;i<bst_size;i++){
        cin>>arr[i];
        insertIntoBST(root,arr[i]);
    }
    
    int queries;
    cin>>queries;
    char S_or_I;
    char Rec_or_not;
    int value;
    for(int j=0;j<queries;j++){
        cin>>S_or_I;
        if(S_or_I=='S'){
            cin>>Rec_or_not;
            cin>>value;
            if(Rec_or_not=='R'){
                if(searchInBST_R(root,value)!=nullptr){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                if(searchInBST_N(root,value)!=nullptr){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        else{
            cin>>value;
            insertIntoBST(root,value);
        }
    }
}
