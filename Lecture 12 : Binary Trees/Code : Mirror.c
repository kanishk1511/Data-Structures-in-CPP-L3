void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right); 
 
    BinaryTreeNode<int> * temp =  root->left;
    root->left= root->right;
    root->right=temp;
   
    
    
    return ;
}
