

int getHeight(TreeNode<int>* root) {
    // Write your code here

    int height=0;
    for(int i=0; i<root->children.size();i++){
       int h=getHeight(root->children[i]);
       if(height< h){  
          height = h;
       }
       
    }
    return height+1;
}
