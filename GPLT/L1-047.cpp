#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n;
    string s;
    int a,b;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s>>a>>b;
        if(a<15 || a>20 || b<50 || b>70){
            cout<<s<<endl;
        }
    }
    return 0;
}