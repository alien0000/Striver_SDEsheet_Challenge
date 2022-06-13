
int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
       if(!root)
        return 0;
    queue<TreeNode<int> *> q;
    q.push(root);
    int mx = 0;
    while(!q.empty())
    {
        int size = q.size();
        mx = max(mx, size);
        while(size--)
        {
            TreeNode<int>* curr = q.front();
            q.pop();
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
    }
    return mx;
}