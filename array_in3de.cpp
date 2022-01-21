#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[2][2][4] = {
        {
            {2,3,5,6},
            {5,2,7,5}
        },
        {
            {3,8,5,7},
            {4,3,5,6}
        }
    };
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<**arr<<endl;
    cout<<***arr<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(*arr)<<endl;
    cout<<sizeof(**arr)<<endl;

    cout<<arr[1][0][2]<<endl;
    cout<<*(**(arr+1)+2)<<endl;
    return 0;
}