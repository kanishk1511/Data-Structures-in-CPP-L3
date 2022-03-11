BinaryTreeNode<int>* constructTree(int *input, int n) {
	// Write your code here
    if(n==0){
        return NULL;
    }
    int mid = (n-1)/2;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(input[mid]);
    root->left = constructTree(input, mid);
    root->right = constructTree(input + mid+1, n - mid - 1);
    
    return root;
}
