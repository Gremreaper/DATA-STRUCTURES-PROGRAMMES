#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    int eve = 0;
    int odd = n-1;

    int arr[n];
    for(int i=0;i<n;i++){
        int x=i+1;
        if(x%2 == 0){
            arr[i] = eve;
            eve++;
        }

        else if(x%2 != 0){
            arr[i] = odd;
            odd--;
        }
    }
    
    int mid;
    if(n%2==0)
    {
        mid=(n/2);
    }else
    {
        mid=((n+1)/2);
    }

    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x=(mid+i);
        int y=(mid-i);
        if((x)<n && (y)>=0)
        {
           v.push_back((arr[x]-arr[y]));
        }else
        {
            break;
        }
    }

    int maxi=INT_MAX;
    for(int i=0;i<v.size();i++)
    {
        if(maxi>v[i])
        {
            maxi=v[i];
        }
    }

    cout<<maxi<<endl;
}

