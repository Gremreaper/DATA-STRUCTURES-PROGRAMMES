#include<iostream>
using namespace std;
bool present(int arr[],int size,int key)
{
    if(size==0)
    {
        return false;
    }
    
    if(key==arr[0])
    {
        return true;
    }
    
    bool check=present(arr+1,size-1,key);
    
    return check;
    
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

    bool ans=present(arr,n,key);

    if(ans==true)
    {
        cout<<"present"<<endl;
    }else{
        cout<<"not present"<<endl;
    }

}