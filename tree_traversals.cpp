

void inorder(BinaryTreeNode<int> *root, vector<int>&ans){

    if(root==NULL)return ;
    inorder(root->left,ans);
    ans.push_back(root->data);
     inorder(root->right,ans);
}
             
void preorder(BinaryTreeNode<int> *root, vector<int>&ans){

    if(root==NULL)return ;
     ans.push_back(root->data);
    preorder(root->left,ans);
   
     preorder(root->right,ans);
}
 void postorder(BinaryTreeNode<int> *root, vector<int>&ans){

    if(root==NULL)return ;
     
    postorder(root->left,ans);
   
     postorder(root->right,ans);
     ans.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>>ans;
    vector<int> in,pre,post;
    inorder(root,in);
    preorder(root,pre);
    postorder(root,post);
    ans.push_back(in);
    ans.push_back(pre);
    ans.push_back(post);
    return ans;
    
    
}