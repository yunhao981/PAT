#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int k;
    scanf("%d",&k);

    double c[1001]={0};

    int i;
    for(i=0;i<k;i++){
        int ta;
        double tb;
        scanf("%d%lf",&ta,&tb);
        c[ta]+=tb;
    }

    scanf("%d",&k);
    for(i=0;i<k;i++){
        int ta;
        double tb;
        scanf("%d%lf",&ta,&tb);
        c[ta]+=tb;
    }

    int count=0;
    for(i=0;i<1001;i++){
        if(c[i]!=0)count++;
    }

    printf("%d",count);

    for(i=1000; i>=0; i--){
        if(c[i]!= 0.0)printf(" %d %.1lf",i,c[i]);
    }


   return 0;
}