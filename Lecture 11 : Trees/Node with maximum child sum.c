template <typename T>
class newpair{
    public:
    TreeNode<T>* node;
    int sum;
};

newpair<int>* maxSumNodePair(TreeNode<int> *root){
   
    if(root==NULL){   // making class pair object Null
         newpair<int> *n1 = new newpair<int>() ;
        n1->node=NULL;
        n1->sum=0;
        return n1;
    }
    
    int sum = root->data; // intialize with root value
    
    for(int i = 0; i < root -> children.size(); i++){   // sum of root & children
        sum += root -> children[i] -> data;
    }
    newpair<int> *ans = new newpair<int>();
    ans -> node = root;  // intialize root node 
    ans -> sum = sum;    // save root sum here
    
    for(int i = 0; i < root -> children.size(); i++){ 
        newpair<int> *childAns = maxSumNodePair(root -> children[i]);
        if(childAns -> sum > ans -> sum){
            ans = childAns;
        }
    }
    return ans;
    
}

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here

    return maxSumNodePair(root)->node;
}


