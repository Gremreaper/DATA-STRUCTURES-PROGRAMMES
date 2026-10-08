#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> solution;

        //Moore Voting Algorithm -> same then incremement or else decreament(in n/3 case we need to find 2 candidates)
        int candidate1 = 0, candidate2 = 1, counter1 = 0, counter2 = 0;
        for(int x : nums){
            if(x == candidate1){
                counter1++;
            }else if(x == candidate2){
                counter2++;
            }else if(counter1 == 0){
                candidate1 = x;
                counter1 = 1;
            }else if(counter2 == 0){
                candidate2 = x;
                counter2 = 1;
            }else{
                counter1--;
                counter2--;
            }
        }

        counter1 = 0, counter2 = 0;
        for(int x : nums){
            if(x == candidate1) counter1++;
            if(x == candidate2) counter2++;
        }

        if(counter1 > nums.size() / 3){
            solution.push_back(candidate1);
        }

        if(counter2 > nums.size() / 3){
            solution.push_back(candidate2);
        }

        return solution;
    }
};

int main(){
    Solution s;
    vector<int> nums = {3,2,3};
    vector<int> result = s.majorityElement(nums);
    for(int x : result){
        cout << x << " ";
    }
}