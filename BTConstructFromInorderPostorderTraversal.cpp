/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
#include<bits/stdc++.h>

 TreeNode<int>* f(vector<int>&inorder, int is, int ie,vector<int>&postorder, int pi,int pe, map<int,int>&mp ){
        if(pi>pe || is>ie)return NULL;
       TreeNode<int>* root=new TreeNode<int>(postorder[pe]);
        int inRoot=mp[postorder[pe]];
        int numLeft=inRoot-is;
        root->left=f(inorder,is,inRoot-1,postorder,pi, pi+numLeft-1,mp);
        root->right=f(inorder,inRoot+1,ie,postorder,pi+numLeft,pe-1,mp);
        return root;
    }
    
 
    
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postorder, vector<int>& inorder) 
{
	// Write your code here.
     if(inorder.size()!=postorder.size())return NULL;
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return f(inorder, 0, inorder.size()-1, postorder,0,postorder.size()-1,mp);
}
