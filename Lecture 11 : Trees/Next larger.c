
TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    if(root==NULL){
        return root;
    }
    TreeNode<int> *ans= NULL;
    
    if(root->data>x){
        ans=root;
    }
    for(int i=0; i<root->children.size(); i++ ){
        TreeNode<int> *temp= getNextLargerElement(root->children[i], x);
        if(temp==NULL){
            continue ;
        }
        else{
            if(ans==NULL){
                ans=temp;
            }
           else if(temp->data < ans->data){
           ans=temp;
        } 
        }
        
    }
    
    return ans;
}
