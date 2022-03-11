bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    if(root==NULL){
        return false;
    }
 
    if(root->data==x){
        return true;
    }
    if(isNodePresent(root->left,x)==true ||isNodePresent(root->right,x)==true)
    {
        return true;
    }    
    else{
        return false;
    }
}
