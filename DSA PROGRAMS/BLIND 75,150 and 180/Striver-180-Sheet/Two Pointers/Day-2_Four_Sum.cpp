#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>solution;
        sort(nums.begin(),nums.end());
        for(int start = 0; start < nums.size(); start++){
            if(start > 0 && nums[start] == nums[start-1]) continue;
            for(int start2 = start + 1; start2 < nums.size(); start2++){
                if(start2 > start+1 && nums[start2] == nums[start2 - 1]) continue;
                int mid = start2 + 1, end = nums.size() - 1;

                while(mid < end){
                long long res = (long long)nums[start] + nums[start2] + nums[mid] + nums[end];
                    if(res == target){
                        solution.push_back({nums[start],nums[start2],nums[mid],nums[end]});

                        while(mid < end && nums[mid] == nums[mid+1]) mid++;
                        while(mid < end && nums[end] == nums[end -1]) end--;

                        mid++;
                        end--;
                    }else if(res < target){
                        mid++;
                    }else{
                        end--;
                    }
                }
            }
        }
        return solution;
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>> result = s.fourSum(nums, target);
    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[i].size(); j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}