Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
	// Write your code here
    if(root==NULL){
        return NULL;
    }
    Node<int>* newNode = new  Node<int>(root->data);
    Node<int>* left = constructLinkedList(root->left);
    Node<int>* head =NULL;
    
    if (left!=NULL){
        Node<int>*temp = left;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    else{
        head = newNode;
    }
    
    Node<int>* right = constructLinkedList(root->right);
    
    if(right!=NULL){
        newNode->next = right;
    }
    
    else{
        newNode->next=NULL;
    }
    if(left == NULL) return head;
    else return left;
    // return head;
    
}
