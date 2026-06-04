class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        if (nums.size() <= 3)
            return nums;
        int left = 0, right = n;
        vector<int> res;
        while (right <= 2 * n - 1) {
            res.push_back(nums[left]);
            res.push_back(nums[right]);
            left++, right++;
        }
        return res;
    }
};
#include <bits/stdc++.h>
using namespace std;                    
int main() {
    int size;
    cin >> size;
    vector<int> arr(2 * size);
    for (int i = 0; i < 2 * size; i++) {
        cin >> arr[i];
    }
    Solution obj;
    vector<int> shuffledArray = obj.shuffle(arr, size);
    for (int i = 0; i < shuffledArray.size(); i++) {
        cout << shuffledArray[i] << " ";
    }
    return 0;
}