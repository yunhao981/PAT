#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int x;
    int n;
    long long s;
    scanf("%d",&n);
    int i;
    bool flag = false;
    for(i=0; ;i++){
        x=x*10 + 1;
        if(x>=n){
            flag = true;
            printf("%d",x/n);
        }else if(flag){
            cout<<"0";
        }
        x=x%n;
        if(x==0)break;
    }
    printf(" %d",i);
    return 0;
}