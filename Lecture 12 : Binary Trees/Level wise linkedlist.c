

vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    // Write your code here
    vector<Node<int>*> v;
    
    if(root==NULL){
       v.push_back(NULL) ;
       return v;
   }

   
   queue<BinaryTreeNode<int>*> pendingNodes;
   pendingNodes.push(root);
   pendingNodes.push(NULL);
    Node<int> *head = NULL;
    Node<int> *tail = NULL;
    
    
    
   
   while(pendingNodes.size()!=0){
      BinaryTreeNode<int> * current = pendingNodes.front();
      pendingNodes.pop();
       
      
      
      
        
       if(current==NULL)
       { 
           tail->next=NULL;
           if(pendingNodes.empty())
              break;
           pendingNodes.push(NULL);
           head=NULL;
           tail=NULL;   
       }
        
     else
     {  
       Node<int> *n = new Node<int>(current -> data);
       if(head==NULL){
           head=tail=n;
           v.push_back(head);
       }
       else{
          tail->next=n;
          tail=n;
       }
     
        if(current->left)
           pendingNodes.push(current->left);
        if(current->right)
           pendingNodes.push(current->right);
     }
    
   }
   return v;
}
