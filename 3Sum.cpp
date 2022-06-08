#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {
	// Write your code here.
 
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i < n;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int lo=i+1, hi=n-1;
                while(lo<hi){
                    if(nums[lo]+nums[hi]+nums[i]==K){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        res.push_back(temp);
                        while(lo<hi && nums[lo]==nums[lo+1])lo++;
                        while(lo<hi && nums[hi]==nums[lo-1])hi--;
                        lo++,hi--;
                    }
                    else if(nums[lo]+nums[hi]+nums[i]<K)lo++;
                    else hi--;
                }
            }
        }
        return res;
}