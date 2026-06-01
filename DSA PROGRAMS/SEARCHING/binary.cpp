#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //size of array

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int x;
    cin>>x;

    //element to search

    int start=0;
    int end=n-1;
    int ans=-1;

    int mid=(start+end)/2;
    while(start<=end)
    {
      if(arr[mid]==x)
      {
        ans=mid;
        break;
      }else if(arr[mid]>x)
      {
        end=mid-1;
      }else{
        start=mid+1;
      }

      mid=(start+end)/2;
    }

    cout<<ans<<endl;
}