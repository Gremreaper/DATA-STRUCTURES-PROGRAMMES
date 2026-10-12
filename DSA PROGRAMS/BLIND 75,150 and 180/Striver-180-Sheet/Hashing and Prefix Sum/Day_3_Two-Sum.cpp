#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>check_existance;
        vector<int> solution;

        for(int i = 0; i < nums.size(); i++){
            if(check_existance.find(target - nums[i]) != check_existance.end()){
                solution.push_back(check_existance[target-nums[i]]);
                solution.push_back(i);
                break;
            }

            check_existance[nums[i]] = i;
        }
        return solution;
    }
};
int main(){
    Solution s;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = s.twoSum(nums, target);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
}