#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // TWO POINTERS 
        int left = 0, right = arr.size()-1;
        while(left <= right){
            if(arr[left] == arr[right]){
                if(arr[left] == 0){
                    left++;
                }else{
                    right--;
                }
            }else{
                 if(arr[left] == 1){
                    swap(arr[left],arr[right]);
                 }
                 left++,right--;
            }
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
