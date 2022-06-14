bool f(BinaryTreeNode<int>* left, BinaryTreeNode<int>* right){
    if(left==NULL || right==NULL)return (left==right);
    if(left->data != right->data)return false;
    return f(left->left,right->right)&& f(left->right , right->left);
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.    
    
    return root==NULL || f(root->left,root->right);
}