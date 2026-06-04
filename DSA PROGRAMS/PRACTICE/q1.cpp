#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int expiry_time;
    cin>>expiry_time;
    vector<tuple<int,int,int>>commands(n);
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        commands[i] = make_tuple(x,y,z);
    }

    unordered_map<int,int>track_expiry;

    int res_count = 0;
    for(int i=0;i<n;i++){
         if(commands[i].first == 0){
              // time for keeping the expiry 
              
         }
    }
    



}