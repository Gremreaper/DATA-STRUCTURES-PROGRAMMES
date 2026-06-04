#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&ans,int k){
    int maxi=INT_MIN,start=0,end=0,n=nums.size(),counter=0;
        while(start<=n-1){
            if(nums[start]==0){
                counter++;

                while(counter>k){
                    if(nums[end]==0){
                        counter--;
                    }
                    end++;
                }
            }

            if(counter<=k){
                maxi=max(maxi,start-end+1);
            }
            start++;
        }
        return maxi;
}
int main(){
    vector<int>ans;
    int n,k;
    cin>>n,k;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        ans.push_back(x);
    }
    cout<<solve(ans,k);
}