#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int left_max = height[left];
        int right_max = height[right];

        int answer_trap = 0;

        while(left < right){
            if(left_max < right_max){
                 left++;
                 left_max = max(left_max,height[left]);
                 answer_trap += (left_max - height[left]);
            }else{
                right--;
                right_max = max(right_max, height[right]);
                answer_trap += (right_max - height[right]);
            }
        }
        return answer_trap;
    }
};
int main(){
    Solution s;
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << s.trap(height);
}