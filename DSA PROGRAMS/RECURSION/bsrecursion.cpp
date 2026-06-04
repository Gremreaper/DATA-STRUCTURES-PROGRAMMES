//binary search using recursion

#include<iostream>
using namespace std;

bool check(int arr[],int s,int e,int key)
{
    if(s>e)
    {
        return false;
        //if element not present end condition
    }

    int mid=s+(e-s)/2;


    if(arr[mid]==key)
    {
        return true;
    }

    if(arr[mid]>key)
    {
        return check(arr,s,mid-1,key);
    }

    else if(arr[mid]<key)
    {
        return check(arr,mid+1,e,key);
    }
}

int main()
{
     int n;
    cin>>n;
    
    int key;
    cin>>key;
    

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    int start=0;
    int end=n-1;

    bool ans=check(arr,start,end,key);

    if(ans==true)
    {
        cout<<"present"<<endl;
    }else{
        cout<<"not present"<<endl;
    }
}