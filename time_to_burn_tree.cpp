/************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
BinaryTreeNode<int>* parents(BinaryTreeNode<int>* root,  map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> &mpp, int start){
    queue<BinaryTreeNode<int>*> q; 
    q.push(root);
    BinaryTreeNode<int>* res;
    while(!q.empty()){
        BinaryTreeNode<int>* node=q.front();
        q.pop();
        if(node->data==start) res=node;
        if(node->left){
            mpp[node->left]=node;
            q.push(node->left);
        }
        if(node->right){
            mpp[node->right]=node;
            q.push(node->right);
        }
    }
    return res;
}
int findMaxDis(map<BinaryTreeNode<int>*,BinaryTreeNode<int>* > &mpp,BinaryTreeNode<int>* target){
     queue<BinaryTreeNode<int>*> q; 
    q.push(target); 
    map<BinaryTreeNode<int>*,int> vis; 
    vis[target]=1;
    int maxi=0;
    while(!q.empty()){
        int f=0;
        int size=q.size();
        for(int i=0;i<size;i++){
            auto node=q.front();
            q.pop();
            if(node->left && !vis[node->left]){
                f=1;
                vis[node->left]=1;
                q.push(node->left);
            }
            if(node->right && !vis[node->right]){
                f=1;
                vis[node->right]=1;
                q.push(node->right);
            }
            if(mpp[node] && !vis[mpp[node]]){
                f=1;
                vis[mpp[node]]=1;
                q.push(mpp[node]);
            }
        }
        if(f)maxi++;
    }
    return maxi;
}
int timeToBurnTree(BinaryTreeNode<int>* root, int start)
{
    // Write your code here
    map<BinaryTreeNode<int>*,BinaryTreeNode<int>* > mpp;
    BinaryTreeNode<int>* target=parents(root, mpp,start);
    int maxi=findMaxDis(mpp,target);
    return maxi;
}
