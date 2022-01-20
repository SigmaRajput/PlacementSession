#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;

    int* ptr = &a;
    int** ptrr = &ptr;
    int*** ptrrr = &ptrr;
    cout<<a<<endl;
      cout<<*ptr<<endl;
       cout<<*ptrr<<endl;

        cout<<ptr<<endl;
         cout<<*ptrr<<endl;
          cout<<**ptrrr<<endl;

           cout<<ptrr<<endl;
           cout<<*ptrrr<<endl;
           cout<<sizeof(ptr);
}