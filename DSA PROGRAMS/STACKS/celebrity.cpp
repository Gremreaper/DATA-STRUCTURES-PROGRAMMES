#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    //celebrity knows no one and all know celebrity

    stack<int>st;
    for(int i=0;i<n;i++)
    {
        st.push(i);
    }

    while(st.size()>1)
    {
        int a=st.top();
        st.pop();
        int b=st.top();
        st.pop();

        if(arr[a][b])
        {
            st.push(b);
        }else{
            st.push(a);
        }
    }


    if(st.empty()) cout<<-1<<endl;

    int celebrity=st.top();

    for(int i=0;i<n;i++)
    {
        if(i!=celebrity && (arr[celebrity][i]==1 || arr[i][celebrity]==0))
        {
            cout<< -1;
            break;
        }
    }

    cout<< celebrity;
    //for double surety
}