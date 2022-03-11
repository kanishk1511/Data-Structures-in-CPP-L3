bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    // Write your code here
    if(root1 == NULL && root2 == NULL) {
        return true;
    }
    if(root1==NULL || root2==NULL){
        return false;
    }
    if(root1->data==root2->data && root1->children.size()==root2->children.size()){
        
        for(int i=0,j=0; i<root1->children.size(),j<root2->children.size(); i++,j++){
        if( root1->children[i]->data!=root2->children[j]->data)
            return false;
        }
        
        for(int i=0,j=0; i<root1->children.size(),j<root2->children.size(); i++,j++){
            bool sub = areIdentical( root1->children[i], root2->children[i]);
            if(sub==false){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
