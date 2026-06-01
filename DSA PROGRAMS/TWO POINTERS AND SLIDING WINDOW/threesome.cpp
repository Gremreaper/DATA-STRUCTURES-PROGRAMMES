#include<bits/stdc++.h>
using namespace std;
//Time Complexity :O(N^2)
//space complexity :O(n)
vector<vector<int>> threeSumunique(vector<int>&nums,int target){
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue; // skip duplicate i

            int j = i + 1, k = n - 1;
            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    
                    // skip duplicates for j
                    while(j < k && nums[j] == nums[j+1]) j++;
                    // skip duplicates for k
                    while(j < k && nums[k] == nums[k-1]) k--;
                    
                    j++;
                    k--;
                } 
                else if(sum < 0) j++;
                else k--;
            }
        }
        
        return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>>ans = threeSumunique(nums,0);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }}