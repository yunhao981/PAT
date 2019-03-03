#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    int a[10];
    for(int i=0; i<10; i++){
        a[i]=0;
    }

    for(int i=0; i<s.length(); i++){
        // printf("%d",s[i]);
        if(s[i]>='0' && s[i]<='9')
            a[s[i]-'0']++;
    }

    for(int i=0; i<10; i++){
        if(a[i]!=0)
            printf("%d:%d\n",i,a[i]);
    }
    return 0;
}