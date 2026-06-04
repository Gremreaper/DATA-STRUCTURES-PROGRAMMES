#include <iostream>
using namespace std;
int lenOfLongSubarr(int A[],  int N, int K) 
    { 
    int maxi=0;
    for(int i=0;i<N;i++)
    {
        int cnt=0;
        for(int j=i;j<N;j++)
        {
            cnt+=A[j];
            
            if(cnt==K)
            {
                maxi=max(maxi,j-i+1);
                cout<<"\nFound and size is "<<j-i+1<<" maxi is "<<maxi<<" location is "<<i;

            }
        }
    }
    return maxi;
}
int find_max(int a[], int n,int k)
{
    int s=0,maxi=0;
    int size=1;
    int sum=0;
    int c=0;
    while(c<n)
    {
        sum+=a[s];
        if(sum==k)
        {
            maxi=max(maxi,size);
            s++;
            cout<<"\nFound and size is "<<size<<" maxi is "<<maxi;
        }
        else if(sum<k)
        {
            size++;
            s++;
        }
        else if(sum>k)
        {
            if(s=n-1)
            {
            c++;
            s=c;
            sum=0;
            size=1;
            cout<<"\n c is "<<c;
            }
            else{
                size++;
                s++;
            }
        }
    }
    cout<<endl;
    return maxi;
}
int main()
{
    int a[]={-13, 0 ,6 ,15, 16, 2, 15, -12,17, -16, 0, -3, 19, -3, 2, -9, -6};
    cout<<find_max(a,17,15);
    //cout<<lenOfLongSubarr(a,17,15);
}