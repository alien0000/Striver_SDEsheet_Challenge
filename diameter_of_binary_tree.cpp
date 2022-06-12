int findDia(TreeNode<int> *root,int &dia){
    if(root==NULL)return 0;
    int lh=findDia(root->left,dia);
    int rh=findDia(root->right,dia);
    dia=max(dia,lh+rh);
    return 1+max(lh,rh);
}


int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    int ans=0;
    findDia(root,ans);
    return ans;
}
