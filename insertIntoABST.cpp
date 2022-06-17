/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
      if(root==NULL)return new TreeNode<int>(val);
        TreeNode<int>* cur=root;
        while(root){
            if(cur->val<val){
                if(cur->right!=NULL)cur=cur->right;
                else{ cur->right=new TreeNode<int>(val);
                     break;
                    }
            }
            else{
                if(cur->left!=NULL)cur=cur->left;
                else{
                    cur->left=new TreeNode<int>(val);
                    break;
                }
            }
        }
        return root;
}