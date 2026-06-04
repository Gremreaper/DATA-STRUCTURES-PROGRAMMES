//code for binary search
#include<iostream>
using namespace std;
int binarysearch(int arr[],int key,int size)
{
    int start=0;
    int end=size-1;


    int mid=(start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }else if(arr[mid]>key)
        {
            end=mid-1;
        }else{
            start=mid+1;
        }


        mid=(start+end)/2;
    }


    return -1;
}

int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;


    int arr[n];

    cout<<"enter the array elements:";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    int keysearch;
    cout<<"enter the key to search:";
    cin>>keysearch;

    int index=binarysearch(arr,keysearch,n);
    cout<<"index of key search is:"<<index<<endl;
}