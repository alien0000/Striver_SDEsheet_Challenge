int check(BinaryTreeNode<int>* root){
      if(root==NULL)return 0;
        int l=check(root->left);
        int r=check(root->right);
        if(l==-1 || r==-1)return -1;
        if(abs(l-r)>1)return -1;
        return 1+max(l,r);
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    int ans=check(root);
    if(ans==-1)return false;
    else return true;
}