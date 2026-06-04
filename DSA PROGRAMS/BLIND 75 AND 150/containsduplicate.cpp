#include<bits/stdc++.h>
#include <vector>
using namespace std;
vector<int>check_ans(vector<int>&nums1,int m,vector<int>&nums2,int n){
     vector<int>ans;
        int start=0,end=0;
        while(start<m || end<n){
            if(start>=m){
                ans.push_back(nums2[end]);
                end++;
            }else if(end>=n){
                ans.push_back(nums1[start]);
                start++;
            }else{
                if(nums1[start] < nums2[end]){
                    ans.push_back(nums1[start++]);
                }else{
                    ans.push_back(nums2[end++]);
                }
            }
        }
        return ans;
}

int main(){
    int m,n;
    cin>>m>>n;

    vector<int>s1,s2;
    for(int i=0;i<m;i++){
        cin>>s1[i];
    }

    for(int i=0;i<n;i++){
        cin>>s2[i];
    }
    vector<int>ans=check_ans(s1,m,s2,n);
    for(int i=0;i<m+n;i++)
    {
        cout<<ans[i]<<endl;
    }
}