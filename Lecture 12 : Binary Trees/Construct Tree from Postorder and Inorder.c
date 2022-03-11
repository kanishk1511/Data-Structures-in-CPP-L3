
BinaryTreeNode<int>* buildTree(int *postOrder, int postLength, int *inOrder, int inLength) {
    // Write your code here
        BinaryTreeNode<int> *root = new BinaryTreeNode<int>(postOrder[postLength-1]);
    
    if(postLength == 1)    // base case when only root is present and no left or right node
        return root;
    
    if(postLength == 0)    //if one of both right or left is present check for 2, 1 2, 1 2;;;dry run it
        return NULL;
    
    int i = 0;
    while(inOrder[i] != postOrder[postLength - 1]){
        i++;
    }
    
    int left_size = i;
    int right_size = inLength -i - 1;
    
    BinaryTreeNode<int> *leftSubtree = buildTree(postOrder, left_size, inOrder, left_size);
    BinaryTreeNode<int> *rightSubtree = buildTree(postOrder + left_size, right_size, inOrder + 1 + left_size, right_size);
    
    root -> left = leftSubtree;
    root -> right = rightSubtree;
    
    return root;
}
