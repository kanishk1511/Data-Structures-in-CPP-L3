

void insertDuplicateNode(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return ;
    }
    BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(root->data);
    insertDuplicateNode(root->left);
    
    newNode->left = root->left;
    root->left = newNode;
    
    insertDuplicateNode(root->right);
    
    return;
    
}
