#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore Voting Algorithm -> same then incremement or else decreament
        int counter = 0;
        int candidate = 0;

        for(int x : nums){
            if(counter == 0){
                candidate = x;
            }

            if(x == candidate){
                counter++;
            }else{
                counter--;
            }
        }
        return candidate;
    }
};
int main(){
    Solution s;
    vector<int> nums = {3,2,3};
    cout << s.majorityElement(nums);
}