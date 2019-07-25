Node* insert(Node* node, int data)
{
    if(node==NULL)
    {
        Node *nn=new Node(data);
        nn->data=data;
        nn->left=NULL;
        nn->right==NULL;
        return nn;
    }
    
    else if(data<node->data)
    node->left=insert(node->left,data);
    
    else if(data>node->data)
    node->right=insert(node->right,data);
    
    return node;
}
