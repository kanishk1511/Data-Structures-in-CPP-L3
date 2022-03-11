TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    // Write your code here
   TreeNode<int>* Max = root;
   for(int i=0; i<root->children.size(); i++){
       TreeNode<int>* rec = maxDataNode(root->children[i]);
      if(Max->data < rec->data){
         Max = rec;
      }

   }
   return Max;
}
