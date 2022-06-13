#include<bits/stdc++.h>
long long int f(TreeNode<int> *root,long long int& maxi,int &lc){
   if(root==NULL )return 0;
           if(root->left==NULL && root->right ==NULL)lc++;
        long long int m=0;
        long long int left=max(m,f(root->left,maxi,lc));
        long long int right=max(m,f(root->right,maxi,lc));
        maxi=max(maxi,left+right+root->val);
        return (root->val)+max(left,right);
}



long long int findMaxSumPath(TreeNode<int> *root)
{
    // Write your code here.
    if(root==NULL)return -1;
       int lc = 0;
    long long int maxi=-1e9;
    f(root,maxi,lc);
       if(lc == 0 || lc == 1)return -1;
    return maxi;
}