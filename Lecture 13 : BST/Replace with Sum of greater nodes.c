int replaceNext( BinaryTreeNode<int> *root , int sum){
    if(root==NULL){
        return sum;
    }
      sum=replaceNext(root->right,sum);
      sum += root->data;
      root->data=sum;
      sum =replaceNext(root->left,sum);
    return sum;
}

void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return ;
    }
    int sum = 0;
    int ans = replaceNext(root,sum);
    
    return;
}
