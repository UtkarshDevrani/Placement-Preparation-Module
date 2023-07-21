vector<int> leftView(Node *root)
{
    vector<int>v;
    if(root==NULL)return v;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node*temp=q.front();
        v.push_back(temp->data);
        int s=q.size();
        for(int i=0;i<s;i++)
        {
            Node* curr=q.front();
            if(curr->left!=NULL)q.push(curr->left);
            if(curr->right!=NULL)q.push(curr->right);
            q.pop();
        }
        
    }
    return v;
   // Your code here
}