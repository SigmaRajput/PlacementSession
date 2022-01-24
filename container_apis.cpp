#include<bits/stdc++.h>
using namespace std;

void display( string &str){
    for(char c:str){
        cout<<c<<endl;
    }
}
int main(){
    string ss= "abcd";
    
    for(int i =0; i< ss.size(); i++)
    cout<<s[i]<<endl;

    display();


    ss.push_back(' ');
    cout<<ss<<endl;
    
    ss.pop_back();
    cout<<ss<<endl;
    return 0;
}
