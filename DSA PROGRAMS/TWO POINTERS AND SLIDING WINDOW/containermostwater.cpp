#include<bits/stdc++.h>
using namespace std;
vector<int> containermostwater(vector<int>& height) {
    int maxArea = 0;
    int left = 0;
    int right = height.size() - 1;

    while (left < right) {
        int width = right - left;
        int currentHeight = min(height[left], height[right]);
        maxArea = max(maxArea, width * currentHeight);

        // Move the pointer pointing to the shorter line
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxArea;
}
int main(){
    int n;
    cin>>n;
    vector<int>height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    int ans = containermostwater(height);
    cout<<ans<<endl;
}   

//time complexity :O(N)
//space complexity :O(1)    