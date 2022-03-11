
template<typename T>
class helppair{
     public:
     TreeNode<T> *max;
     TreeNode<T> *smax;
 };
 helppair<int>* getSecondLargestNodeHelper(TreeNode<int> *root){
     helppair<int> *ans = new helppair<int>();
     ans->max=root;
     ans->smax=NULL;
  
     for(int i=0; i<root->children.size(); i++){
     helppair<int> *temp = getSecondLargestNodeHelper(root->children[i]);
     TreeNode<int> *dis =NULL;
     if(temp->max->data > ans->max->data){
        if(temp->smax==NULL){
            ans->smax = ans->max;
            ans->max=temp->max; 
         }
         else{
                if(temp->smax->data > ans->max->data){
                    ans->max=temp->max;
                    ans->smax=temp->smax;
                }
                else{
                    ans->smax=ans->max;
                	ans->max=temp->max;
                }
            }

     }
     else{
            if(ans->max->data != temp->max->data){
                if (ans->smax==NULL || temp->max->data > ans->smax->data)
                ans->smax=temp->max;
            }
        }
     }
  
    return ans;
}

TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
     // Write your code here
     if(root==NULL){
         return root;
     }
     return getSecondLargestNodeHelper(root)->smax;
 }
