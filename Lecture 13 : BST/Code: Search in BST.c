bool searchInBST(BinaryTreeNode<int> *root , int k) {
	// Write your code here
    if(root==NULL){
        return false;
    }
    if(root->data == k){
        return true;
    }
    else{
        if(searchInBST(root->left,k) == true || searchInBST(root->right,k) == true)
            return true;
        else
            return false;

    }
    
}
