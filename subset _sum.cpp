void f(int i,vector<int>&nums,int sum, vector<int>&ans){
    if(i==nums.size()){
        ans.push_back(sum);
        return ;
    }
    
    f(i+1,nums,sum+nums[i],ans);
    f(i+1,nums,sum,ans);
}
vector<int> subsetSum(vector<int> &num)
{
   vector<int>ans;
    int sum=0;
    f(0,num,0,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
