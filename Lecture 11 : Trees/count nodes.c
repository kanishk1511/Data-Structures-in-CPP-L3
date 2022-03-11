int getLargeNodeCount(TreeNode<int>* root, int x) {
    // Write your code here
    if(root==NULL)
        return 0;
    int count =0;
    if(root->data>x){
        count++;
    }
    
    for(int i=0;i<root->children.size(); i++){
      //int n = getLargeNodeCount(root->children[i],x);
        count +=getLargeNodeCount(root->children[i],x);
    }
    
    return count;
}
