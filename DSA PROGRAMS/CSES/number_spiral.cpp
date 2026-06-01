#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long n = max(x,y);
        long long ans = n*n - n + 1;
        if(n%2 == 0){
            if(x == n){
                ans += (y-1);
            }else{
                ans -= (x-1);
            }
        }else{
            if(y == n){
                ans += (x-1);
            }else{
                ans -= (y-1);
            }
        }
        cout<<ans<<endl;
    }
}