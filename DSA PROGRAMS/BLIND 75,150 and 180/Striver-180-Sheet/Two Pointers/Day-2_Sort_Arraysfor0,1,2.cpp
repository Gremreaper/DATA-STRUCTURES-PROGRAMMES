#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Dutch National Flag algorithm
        int start = 0, mid = 0, end = nums.size() - 1;

        while(mid <= end){
            if(nums[mid] == 0){
                swap(nums[start],nums[mid]);
                start++,mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else if(nums[mid] == 2){
                swap(nums[mid],nums[end]);
                end--;
            }
        }
    }
};
int main(){
    Solution s;
    vector<int> nums = {2,0,2,1,1,0};
    s.sortColors(nums);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
}