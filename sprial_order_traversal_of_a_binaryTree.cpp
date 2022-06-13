vector<int> spiralOrder(BinaryTreeNode<int> *root)
{
	// Write Your Code Here.
      vector<int>ans;
        if(root==NULL)return ans;
        queue<BinaryTreeNode<int>*> q;
        int flage=true;
        q.push(root);
        while(!q.empty()){
             int size=q.size();
               vector<int>res(size);
           
         
            for(int i=0;i<size;i++){
            BinaryTreeNode<int>* node=q.front();
            q.pop();
            int index=flage?i:(size-1-i);
              res[index]=node->data;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                
            }
              flage=!(flage);
           for(int i=0;i<size;i++)
            ans.push_back(res[i]);
        }
      return ans;
}
