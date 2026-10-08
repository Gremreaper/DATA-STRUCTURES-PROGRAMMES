#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi_product = INT_MIN;
        int curr_product = 1;

        for(int i = 0; i < nums.size(); i++){
            curr_product *= nums[i];
            maxi_product = max(maxi_product , curr_product);
            if(curr_product == 0) curr_product = 1;
        }

        curr_product = 1;

        for(int i = nums.size() - 1; i >= 0; i--){
            curr_product *= nums[i];
            maxi_product = max(maxi_product , curr_product);
            if(curr_product == 0) curr_product = 1;
        }

        return maxi_product;
    }
};

int main(){
    Solution s;
    vector<int> nums = {2,3,-2,4};
    cout << s.maxProduct(nums);
}