#include<bits/stdc++.h>
using namespace std;

void cbv(int a){
    ++a;
}
void cbp(int *p){
    ++(*p);
}
void cbr(int &a){
    ++a;
}

int main(){

    int a=10;
    cout<<a;
    cbv(a);
    cout<<a;
    cbv(&a);
    cout<<a;
    cbr(a);
    cout<<a;
    return 0;
}