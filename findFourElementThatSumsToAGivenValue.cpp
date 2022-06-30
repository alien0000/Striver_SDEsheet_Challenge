#include <bits/stdc++.h> 
string fourSum(vector<int> nums, int target, int n) {
    // Write your code here.
    
      sort(nums.begin(), nums.end());
        string ans = "";
    if(nums.size()<4){
        return ans;
    }
     for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int x=j+1, y=n-1;
                long long findSum = target - (long)nums[i] - (long)nums[j];
                
                while(x<y){
                    long long sum = nums[x] + nums[y];
                    if(sum > findSum)   y--;
                    else if(sum < findSum)  x++;
                    else{
                        ans = ans + "Yes";
                        return ans;
                    }
                }
            }
        }
    ans=ans+"No";
        return ans;
}
