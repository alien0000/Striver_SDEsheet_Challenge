#include<bits/stdc++.h>
void f(int ind, int target,vector<int>&arr, int n, vector<int>&temp, vector<vector<int>>&ans){
    if(target==0){
        ans.push_back(temp);
        return;
    }
    
    for(int i=ind;i<n;i++){
        if(i>ind && arr[i]==arr[i-1]) continue;
        if(arr[i]>target)break;
        temp.push_back(arr[i]);
        f(i+1,target-arr[i],arr,n,temp,ans);
        temp.pop_back();
    }
}




vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	// Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    vector<int>temp;
    f(0,target,arr,n,temp,ans);
    return ans;
}
