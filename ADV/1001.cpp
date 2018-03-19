#include <cstdio>
#include <iostream>

using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    string s;
    s = to_string(a+b);
    int len = s.length();

    int i=0,j=0;
    if(s[i]=='-'){
        cout<<s[i];
        j=1;
    }

    int k=0;
    for(i=j;i<len;i++){
        cout<<s[i];
        if( (i+1) %3 == len % 3 && i != len-1)cout<<",";
    }
    return 0;
}
