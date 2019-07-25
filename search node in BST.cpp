bool search(Node* root, int x)
{
    if(root->data==x)
    return 1;
    
    if(x<root->data && root->left==NULL)
    return 0;
    
    if(x>root->data && root->right==NULL)
    return 0;
    
    if(x<root->data)
    return search(root->left,x);
    
    if(x>root->data)
    return search(root->right,x);
    
}
