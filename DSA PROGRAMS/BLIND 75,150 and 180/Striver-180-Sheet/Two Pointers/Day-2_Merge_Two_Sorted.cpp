#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end1 = m - 1;        
        int end2 = n - 1;        
        int end3 = m + n - 1;    

        while(end1 >= 0 && end2 >= 0){
            if(nums1[end1] > nums2[end2]){
                nums1[end3] = nums1[end1];
                end1--;
            } else {
                nums1[end3] = nums2[end2];
                end2--;
            }
            end3--;
        }

        while(end2 >= 0){
            nums1[end3] = nums2[end2];
            end2--;
            end3--;
        }
    }
};
int main(){
    Solution s;
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;
    s.merge(nums1, m, nums2, n);
    for(int i = 0; i < nums1.size(); i++){
        cout << nums1[i] << " ";
    }
}