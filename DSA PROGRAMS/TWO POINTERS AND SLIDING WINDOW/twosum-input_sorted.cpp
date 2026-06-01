#include<bits/stdc++.h>
using namespace std;

//Time Complexity :O(N)
//space complexity :O(1)

vector<int> twoSum(vector<int>& numbers, int target) {
    int start = 0,end = numbers.size()-1;
    vector<int>ans;
    while(start<end){
        int sum = numbers[start]+numbers[end];
        if(sum==target){
            ans.push_back(start+1);
            ans.push_back(end+1);
            return ans;
        }else if(sum<target){
            start++;
        }else{
            end--;
        }
    }
    return ans;
}
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>numbers(n);
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    vector<int>ans = twoSum(numbers,target);
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}