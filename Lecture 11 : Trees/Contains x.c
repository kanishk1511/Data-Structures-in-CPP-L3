
bool isPresent(TreeNode<int>* root, int x) {
    // Write your code here
    if(root==NULL){
        return false;
    }
    
    if(root->data==x){
        return true;
    }
    
    for(int i=0; i<root->children.size(); i++){
        bool result = isPresent(root->children[i],x);
        
        if(result==true){
            return true;
        }
    }
    return false;
}
