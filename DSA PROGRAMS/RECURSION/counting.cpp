#include<iostream>
using namespace std;

int countr(int n)
{
    // for reverse order 6 5 4 3 2 1
    if(n==0)
    {
        return 0;
    }


    cout<<n<<endl;
   
   countr(n-1);

}

int countf(int n)
{

    //for front order 1 2 3 4 5 6 
    if(n==0)
    {
        return 0;
    }

    countf(n-1);

    cout<<n<<endl;
}


int main()
{
    int x;
    cin>>x;

    cout<<endl;

    countr(x);
    cout<<endl;
    countf(x);
}

