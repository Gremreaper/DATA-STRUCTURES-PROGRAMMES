#include <bits/stdc++.h>
using namespace std;
void f(int i,int m,int down, int power,int& ans){
 if (i > m+2) return;
 if (i < 0) return;
 if(i == m) ans++;
 f(i+pow(2,power),m,1,power+1,ans);
 if (down)
 {
     f(i-1,m,0,power,ans);
 }
}

int solve(int m){
     int ans = 0;
    f(1,m,1,0,ans);
     return ans;
}

int main()
{
    int m;
    cin>>m;

    cout<<solve(m);
}