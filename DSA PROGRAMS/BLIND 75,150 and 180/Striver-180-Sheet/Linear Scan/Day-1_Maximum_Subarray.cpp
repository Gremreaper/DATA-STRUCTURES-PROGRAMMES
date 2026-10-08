#include<vector>
#include<iostream>
using namespace std;    
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = INT_MIN;
        int currSum = 0;
        for(int i=0;i<n;i++){
            currSum += nums[i];
            maxSum = max(maxSum,currSum);
            if(currSum<0){
                currSum = 0;
            }
        }
        return maxSum;
    }
};
int main(){
    Solution s;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<s.maxSubArray(nums);
    return 0;
}