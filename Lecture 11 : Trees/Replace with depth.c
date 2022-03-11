
void helper(TreeNode<int>* root, int k){
    root->data = k;
    for(int i=0; i<root->children.size(); i++){
        helper(root->children[i], k+1);
    }
}

void replaceWithDepthValue(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return ;
    }
    helper(root, 0);
}
