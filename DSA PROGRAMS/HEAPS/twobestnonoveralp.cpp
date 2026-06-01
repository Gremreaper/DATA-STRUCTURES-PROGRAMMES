#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>>&store,int n){
    //returning the maximum value according to our requirement
    
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>store;
    for(int i=0;i<n;i++){
        vector<int>overlap;
        int start,end,value;
        cin>>start>>end>>value;
        overlap.push_back(start);  overlap.push_back(end);  overlap.push_back(value);
        store.push_back(overlap);
    }

    return solve(store,n);
}