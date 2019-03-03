#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int a;
    int b;
    int sum=0;
    scanf("%d %d",&a,&b);
    int j=1;
    for(int i=a; i<=b; i++,j++){
        sum += i;
        printf("%5d",i);
        if(j==5 || i==b){
            printf("\n");
            j=0;
        }
    }
    printf("Sum = %d\n", sum);
}