#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
    //bubble sort

    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
      }
    }
}
int solve(int arr[],int n,int cows)
{
    int start=1;
    sort(arr,n);
    int end=arr[n-1]-arr[0];
    int ans=0;

    while(start<=end)
    {
        int mid=(start+end)/2;
        int pos=arr[0];
        int rem_cows=1;
        for(int i=1;i<n;i++)
        {
            if(pos+mid<=arr[i])
            {
                rem_cows++;
                pos=arr[i];
            }
        }

        if(rem_cows<cows)
        {
            end=mid-1;
        }else{
            ans=mid;
            start=mid+1;
        }
    }

    return ans;

}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int cows;
    cin>>cows;

    int ans=solve(arr,n,cows);
    cout<<ans<<endl;
}