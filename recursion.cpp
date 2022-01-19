#include<bits/stdc++.h>
using namespace std;

int rec(int a, int b){
    if(b==0)
    return 1;
    else
    return a* rec(a,b-1);
}
int main(){
    int a=2,b=5;
    cout<<rec(2,5);
    return 0;
}