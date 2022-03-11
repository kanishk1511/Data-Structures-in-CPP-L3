#include<bits/stdc++.h>
bool helper(BinaryTreeNode<int> *root, int min, int max){
    
    if(root == NULL){
        return true;
    }
    
    if(root -> data < min || root -> data > max){
        return false;
    }
    
    bool left = helper(root -> left, min, root -> data );
    bool right = helper(root -> right, root -> data, max);
    
    return left && right;
}

bool isBST(BinaryTreeNode<int> *root){
    
    int min = INT_MIN;
    int max = INT_MAX;
    
    return helper(root, min, max);
}

int height (BinaryTreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    return 1 + max(height(root->left),height(root->right));
}

int largestBSTSubtree(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return 0;
    }
    if(isBST(root)){
        return height(root);
    }
    else{
        int left = largestBSTSubtree(root->left);
        int right = largestBSTSubtree(root->right);
        return max(left,right);
    }
}
