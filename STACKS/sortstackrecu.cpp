#include<iostream>
#include<stack>
using namespace std;


void func(stack<int>&st,int elem)
{
    if(st.empty() ||(!st.empty() && st.top()<elem))
    {
        st.push(elem);
        return;
    }

    int top=st.top();
    st.pop();
    func(st,elem);
    st.push(top);
}
void sort(stack<int>&st)
{
    if(st.empty())
    {
        return;
    }

    int elem=st.top();
    st.pop();
    sort(st);
    func(st,elem);

}
int main()
{
      stack<int>st;
      int n;
      cin>>n;

      int arr[n];


      for(int i=0;i<n;i++)
      {
      cin>>arr[i];
      }

      for(auto it:arr)
      {
        st.push(it);
      }

      sort(st);

      while(!st.empty())
      {
        cout<<st.top()<<endl;
        st.pop();
      }
}