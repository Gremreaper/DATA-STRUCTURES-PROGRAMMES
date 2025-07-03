#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;

    int eve = 0;
    int odd = n-1;

    int arr[n];
    for(int i=0;i<n;i++){
        if(i+1 %2 == 0){
            arr[i] = eve;
            eve++;
        }

        if(i+1 %2 != 0){
            arr[i] = odd;
            odd--;
        }
    }

    int temp[n/2] = {0};

    
    if(n%2 != 0){
        int mid = n+1/2;
        for(int i=0 ; i<n/2 ; i++){
            temp[i] = arr[mid+i] - arr[mid - 1];
        }
    }
    else{
       int mid = n/2;
         for(int i=0 ; i<n/2 ; i++){
            if(mid-1 >= 0){
            temp[i] = arr[mid+i] - arr[mid - i];
            }
        }
    }

    
 
    int max = INT_MIN;
    for(int i=0 ; i<n/2 ; i++){
        if(temp[i] > max){
             max = temp[i];
        }
    }


    cout << max << endl;
    return 0;
}