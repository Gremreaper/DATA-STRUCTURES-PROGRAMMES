#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int,vector<int>> find_longest_subarray;
        int max_length = 0, sum = 0;
        for(int u = 0; u < arr.size(); u++){
            sum += arr[u];
            if(sum == k){
                max_length = max(max_length, u + 1);
            }
            if(find_longest_subarray.find(sum - k) != find_longest_subarray.end()){
                max_length = max(max_length , u - find_longest_subarray[sum - k][0]);
            }
            
            find_longest_subarray[sum].push_back(u);
        }
        return max_length;
    }
};
int main(){
    Solution s;
    vector<int> arr = {1,2,3,4,5};
    int k = 9;
    cout << s.longestSubarray(arr, k);
}