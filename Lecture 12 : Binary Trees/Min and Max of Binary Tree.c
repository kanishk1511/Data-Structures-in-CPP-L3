#include<climits>
#include <algorithm>

pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	// Write your code here
    pair<int,int> p;
        p.first = INT_MAX;
        p.second = INT_MIN;
    if (root==NULL){ 
           return p;
    }  
    pair<int, int> left =  getMinAndMax(root->left);
    pair<int, int> right =  getMinAndMax(root->right);
    
    p.first= min(root->data,min(left.first, right.first));
    p.second= max(root->data,max(left.second, right.second));
    
    return p;
    
}
