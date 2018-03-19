#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;
int main(){
    char a[100][100];
    char c[2000];
    int n;
    int i,j,k;

    scanf("%d",&n);
    getchar();
    gets(c);

    int length = strlen(c);

    k=0;
    i=0;

    int t;
    if(length%n!=0)t=n-length%n;
    for(i=0;i<t;i++){
        c[length+i]=' ';
    }

    i=0;
    while(i<length){
        for(j=0;j<n;j++){
            a[k][j]=c[i];
            i++;
        }
        k++;
    }

    for(j=0;j<n;j++){
        for(i=0;i<k;i++){
            cout<<a[k-i-1][j];
        }
        cout<<endl;
    }
    return 0;
}