

#include<bits/stdc++.h>
vector<int> create(BinaryTreeNode<int>*root){
    queue<BinaryTreeNode<int>*>q;
    vector<int>v;
    q.push(root);
    while(!q.empty()){
          BinaryTreeNode<int>*front=q.front();
          v.push_back(front->data);
          q.pop();
          if(front->left!=NULL){
            q.push(front->left);
          }
          if(front->right!=NULL){
            q.push(front->right);
          }
          }
          sort(v.begin(),v.end());
          return v;
}
void pairSum(BinaryTreeNode<int> *root, int s) {
    // Write your code here
    
         if(root==NULL){
        return;
    }
    vector<int>v=create(root);
    int i=0;
    int j=v.size()-1;
    while(j>i){
        if(v[i]+v[j]==s){
            cout<<v[i]<<" "<<v[j]<<endl;
            i++;
            j--;
        }else if(v[i]+v[j]>s){
            j--;
        }else{
            i++;
        }
    } 
}

