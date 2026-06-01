//just remove all the elements having value equals to k

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&ans ,int n,int k){
    int index=0;
    for(int i=0;i<n;i++){
        if(ans[i]!=k){
            ans[index++=ans[i];
        }
    }
    return index;
}
int main()
{
    int n,k;
    cin>>n>>k;

    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }

    int s=solve(ans,n,k);
    cout<<s<<endl;
}