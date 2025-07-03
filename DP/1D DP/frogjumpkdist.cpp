#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> heights = {10, 30, 20, 40};
     int n = heights.size();            
    vector<int>dp(n,INT_MAX);
    dp[0] = 0;
    int k;
    cin>>k;

    for(int i=1;i<n;i++){
        for(int j=1;j<=k && i-j>=0;j++){
            dp[i] = min(dp[i],dp[i-j] + abs(heights[i]-heights[i-j]));
        }
    }
    cout << "Minimum energy required: " << dp[n-1] << endl;
}