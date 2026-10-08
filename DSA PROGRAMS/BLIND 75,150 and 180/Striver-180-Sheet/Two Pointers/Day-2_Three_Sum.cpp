#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        sort(nums.begin(),nums.end());
        for(int start = 0; start < nums.size(); start++){
            if(start > 0 && nums[start] == nums[start - 1]) continue;
            int mid = start + 1, end = nums.size() - 1;
            while(mid < end){
                int sum = nums[start] + nums[mid] + nums[end];
                if(sum == 0){
                    answer.push_back({nums[start],nums[mid],nums[end]});
                    while(mid < end && nums[mid] == nums[mid +1]) mid++;
                    while(mid < end && nums[end] == nums[end - 1]) end--;

                    mid++;
                    end--;
                }else if(sum < 0){
                    mid++;
                }else{
                    end--;
                }
            }
        }
        return answer;
    }
};

int main(){
    Solution s;
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> result = s.threeSum(nums);
    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[i].size(); j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}