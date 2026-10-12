#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int max_counter = 0;

        for(int value : st){
            if(st.find(value - 1) == st.end()){
                int length = 1;
                int curr = value;

                while(st.find(curr + 1) != st.end()){
                    curr++;
                    length++;
                }

                max_counter = max(max_counter, length);
                value = curr - 1;
            }
        }
        return max_counter;
    }
};
int main(){
    Solution s;
    vector<int> nums = {100,4,200,1,3,2};
    cout << s.longestConsecutive(nums);
}