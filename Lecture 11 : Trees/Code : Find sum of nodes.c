int sumOfNodes(TreeNode<int>* root) {
    // Write your code here
   int ans = root->data;
   for(int i=0; i<root->children.size(); i++){
      ans += sumOfNodes(root->children[i]);
   }
   return ans;
}
