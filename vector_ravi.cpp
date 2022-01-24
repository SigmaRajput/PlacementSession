#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr(10);
    cout<<arr.size();

    for(int i=0; i<arr.size(); i++)
    cin>>arr[i];

    for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<endl;

    vector<int> arr1{1,2,3,3,5,6};
    vector<int> arr2 = {1,2,3,4,6};

    cout<<arr1.size();
    cout<<arr2.size();

    vector<int> arr3(10,-1);
    cout<<arr3.size();

    vector<int> arr4;
    arr4.reserve(10);
    arr4.push_back(5);
    arr4.push_back(7);

    for(int i:arr4)
    cout<<i<<endl;

    return 0;
}