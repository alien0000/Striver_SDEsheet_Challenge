void solve(int row,
     int n,vector<int>&cols,vector<int>&ndiag,vector<int>&rdiag,
           vector<vector<int>>&board,vector<vector<int>>&ans){
    if(row==n){
        vector<int>temp;
        for(auto vi:board){
            for(auto vj:vi){
                temp.push_back(vj);
            }
        }
        ans.push_back(temp);
        return;
    }
    for(int col=0;col<n;col++){
        if(cols[col]==0 && ndiag[row+col]==0 && rdiag[n+(row-col)-1]==0){
            {
                cols[col]=1,ndiag[row+col]=1,rdiag[n+(row-col)-1]=1;
                board[row][col]=1;
                solve(row+1,n,cols,ndiag,rdiag,board,ans);
                cols[col]=0,ndiag[row+col]=0,rdiag[n+(row-col)-1]=0;
                board[row][col]=0;
            }
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<int>cols(n,0),ndiag(2*n-1,0),rdiag(2*n-1,0);
    vector<vector<int>>ans;
    vector<vector<int>>board(n,vector<int>(n));
    solve(0,n,cols,ndiag,rdiag,board,ans);
     return ans;   
}







