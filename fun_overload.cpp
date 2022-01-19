#include<bits/stdc++.h>
using namespace std;

int max_sel(int a, int b){
    return a>b?a:b;
}
/*int max_sel(int a, int b, int c){
    return a>b?(a>c?a:c):(b>c?b:c);
}*/
int max_sel(int a, int b, int c){
    return max_sel(a,max_sel(b,c));
}

int main(){
    cout<<"Max of teo number is"<<max_sel(10,20);
    cout<<"Max of three number is"<<max_sel(10,20,30);
    return 0;
}