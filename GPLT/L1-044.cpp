#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int k;
    string input;
    cin>>k;
    int i=0;
    while(cin>>input){
        if(input=="End"){
            break;
        }
        if(i==k){
            cout<<input<<endl;
            i=0;
            continue;
        }
        if(input=="ChuiZi")cout<<"Bu"<<endl;
        if(input=="JianDao")cout<<"ChuiZi"<<endl;
        if(input=="Bu")cout<<"JianDao"<<endl;
        i++;
    }
    return 0;
}