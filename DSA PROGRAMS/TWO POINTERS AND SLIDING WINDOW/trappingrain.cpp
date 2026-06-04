#include<bits/stdc++.h>
using namespace std;
    int trap(vector<int>& height) {
        int ans_water = 0;
        int left = 0 , right = height.size() -1;
        int left_max = height[left];
        int right_max = height[right];
        while(left < right){
          if(left_max < right_max){
             left ++;
             left_max = max(left_max,height[left]);
            ans_water += left_max - height[left];
          }else{
              right --;
              right_max = max(right_max,height[right]);
              ans_water += right_max - height[right];
          }
        }
        return ans_water;
    }
int main(){
    int n;      
    cin>>n;
    vector<int>height(n);       
    for(int i=0;i<n;i++){
        cin>>height[i];
    }   
    int ans = trap(height);
    cout<<ans<<endl;
}

//time complexity :O(N)
//space complexity :O(1)



