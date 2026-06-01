#include <bits/stdc++.h>
using namespace std;
vector<int> calling_function(vector<int> &arr, int size){
    vector<int> res(2 * size);
    for(int i = 0; i < size; i++){
         res[ i ] = arr[ i ];
         res[ i + size ] = arr[ i ];
    }
    return res;
}
int main()
{
    int size;
    cin >> size;
    vector<int> arr1(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    vector<int> arr2 = calling_function(arr1, size);
    for(int i = 0; i < arr2.size(); i++){
        cout << arr2[i] << " ";
    }
}