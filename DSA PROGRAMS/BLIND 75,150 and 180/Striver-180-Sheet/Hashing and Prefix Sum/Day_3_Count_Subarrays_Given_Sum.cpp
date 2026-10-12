#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>find_prefix;
        find_prefix[0] = 1;
        int sum = 0, find_subarrays = 0;
        for(int x : nums){
            sum += x;
            if(find_prefix.find(sum - k) != find_prefix.end()){
                find_subarrays += find_prefix[sum - k];
            }
            find_prefix[sum]++;
        }
        return find_subarrays;
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,1,1};
    int k = 2;
    cout << s.subarraySum(nums, k);
}