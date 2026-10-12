#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int counter = 0;
        unordered_map<long long,int> mpp;
        int xor_sum = 0;
        
        for(int x : arr){
            xor_sum ^= x;
            if(xor_sum == k) counter++;
            
            int value = xor_sum ^ k;
            if(mpp.find(value) != mpp.end()){
                 counter += mpp[value];
            }
            
            mpp[xor_sum] ++;
        }
        return counter;
    }
};
int main(){
    Solution s;
    vector<int> arr = {4,2,2,6,4};
    int k = 6;
    cout << s.subarrayXor(arr, k);
}