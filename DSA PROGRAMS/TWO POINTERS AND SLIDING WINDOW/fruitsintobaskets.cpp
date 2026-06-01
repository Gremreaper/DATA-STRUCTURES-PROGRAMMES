#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&ans){
     if(fruits.size()==1) return 1;
        map<int,int>mpp;
        int start=0,end=0,max_len=INT_MIN;
        while(start<fruits.size()){
            mpp[fruits[start]]++;
            while(mpp.size()>2){
                mpp[fruits[end]]--;
                if(!mpp[fruits[end]]){
                    mpp.erase(fruits[end]);
                }
                end++;
            }

            max_len=max(max_len,start-end+1);
            start++;
        }
        return max_len;
}
int main(){
    vector<int>ans;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        ans.push_back(x);
    }

    cout<<solve(ans)<<endl;
}