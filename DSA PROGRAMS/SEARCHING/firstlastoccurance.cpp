#include<iostream>
using namespace std;

int firstoccurance(int arr[],int size,int key)
{
    int ans=-1;
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }else if(arr[mid]>key)
        {
            end=mid-1;
        }else 
        {
            start=mid+1;
        }

        mid=(start+end)/2;
    }

    return ans;
}

int lastoccurance(int arr[],int size,int key)
{
    int ans=-1;
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }else if(arr[mid]>key)
        {
            end=mid-1;
        }else 
        {
            start=mid+1;
        }

        mid=(start+end)/2;
    }

    return ans;
}


int main()
{
    int n;
    cout<<"enter the size of our array:";
    cin>>n;

    int arr[n];
    cout<<"enter the values in our array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"enter the value to search:";
    cin>>key;

    int first=firstoccurance(arr,n,key);
    int last=lastoccurance(arr,n,key);

    cout<<"The first and last occurances are:"<<first<<" "<<last<<endl;

}