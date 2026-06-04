#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> st;
        int left = 0, right = 0;
        int ans_max = 0; 
        int ans = 0;

        while (right < s.length()) {
            st[s[right]]++;
            ans_max = max(ans_max, st[s[right]]);
            if ((right - left + 1) - ans_max > k) {
                st[s[left]]--;
                left++;
            }
            ans = max(ans, right - left + 1);

            right++;
        }

        return ans;
    }
};

int main() {
    Solution sol;
    string s = "AABABBA";
    int k = 1;
    cout << sol.characterReplacement(s, k) << endl;
    return 0;
}