#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n;
    char c;
    scanf("%d %c",&n, &c);
    if(n==1){
        printf("%c\n",c);
        printf("0\n");
        return 0;
    }

    int num = 1;
    int iter = 1;

    while(num<n){
        num = num + 4 * iter + 2;
        iter++;
    }

    num = num - 4 * iter + 2;
    iter--;
    int layer = 2 * (iter-1) + 1;

    for(int i=0; i<iter; i++){
        for(int j=0; j<iter; j++){
            if(j<i)printf(" ");
            else printf("%c",c);
            // if(i<=j)printf("%c",c);
        }
        for(int j=iter; j<layer; j++){
            if(i+j<layer)printf("%c",c);
            // else printf(" ");
        }
        printf("\n");
    }
    for(int i=iter; i<layer; i++){
        for(int j=0; j<iter; j++){
            if(i+j>=layer-1)printf("%c",c);
            else printf(" ");
        }
        for(int j=iter; j<layer; j++){
            // if(i<j)printf(" ");
            // else printf("%c",c);
            if(i>=j)printf("%c",c);
        }

        printf("\n");
    }
    // printf("%d %d\n",num, iter);
    printf("%d\n",n-num);

    return 0;
}
