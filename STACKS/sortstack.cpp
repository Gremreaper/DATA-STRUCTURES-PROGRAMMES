/*
void insert(stack<int>&s,int temp)
{
    if(s.size()==0 || s.top()<=temp)
    {
        s.push(temp);
        return;
    }
    
    int value=s.top();
    s.pop();
    insert(s,temp);
    s.push(value);
}
void sorting(stack<int>&s)
{
    if(s.size()==1)
    {
        return;
    }
    
    int temp=s.top();
    s.pop();
    sorting(s);
    insert(s,temp);
}
void SortedStack :: sort()
{
   sorting(s);
}

*/