//problem to find out the nth root of a number by binary search 

#include<bits/stdc++.h>
using namespace std;

int solve(int power,int found)
{
    int start=1;
    int end=found;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(pow(mid,power)==found)
        {
            return mid;
        }else if(pow(mid,power)<found)
        {
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,m;
    cin>>n>>m;

    cout<< solve(n,m) <<endl;
}