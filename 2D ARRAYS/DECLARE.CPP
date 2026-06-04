#include<iostream>
using namespace std;
int main()
{
    int rows,columns;

    cout<<"enter the rows:";
    cin>>rows;

    cout<<"enter the columns:";
    cin>>columns;

    int arr[rows][columns];

    for(int i=0;i<rows;i++)
    {
      for(int j=0;j<columns;j++)
      {
        cin>>arr[i][j];
      }
    }


    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }

    int maxi=-999;
    int index;

    for(int i=0;i<rows;i++)
    {
        int sum=0;
        for(int j=0;j<columns;j++)
        {
            sum+=arr[i][j];
        }

        if(maxi<sum)
        {
            maxi=sum;
            index=i;
        }
    }

    cout<<"Max sum value and row is:"<<maxi<<","<<index<<endl;
}