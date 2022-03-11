#include <queue>

void printLevelWise(BinaryTreeNode<int> *root) {
    // Write your code here
      if(root==NULL){
      return ;
   }

   
   queue<BinaryTreeNode<int>*> pendingNodes;
   pendingNodes.push(root);
   pendingNodes.push(NULL);
    
   
   while(pendingNodes.size()!=0){
      BinaryTreeNode<int> * front = pendingNodes.front();
      pendingNodes.pop();
  
      if(front == NULL){
            
            if(pendingNodes.empty())
                return;
            
            else{
                cout << endl;
                pendingNodes.push(NULL);
            }
        }
        
        else{
            // just print the value of front -> data
            
            cout << front -> data << " ";
            
            if(front -> left != NULL)
                pendingNodes.push(front -> left);
            if(front -> right != NULL)
                pendingNodes.push(front -> right);
        }
       
   }
   
}
