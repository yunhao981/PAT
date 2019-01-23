#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int a[5]={0};
    int res[5] = {0};
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int temp;
        scanf("%d", &temp);
        int key = temp % 5;
        if(key ==0 ){
            if(temp % 2 == 0) {
                res[0] += temp;
                a[0]++;
            }
        }else if(key == 1) {
            a[1]++;
            if(a[1] % 2 == 0) {
                res[1] += temp;
            }else{
                res[1] -= temp;
            }
        }else if(key == 2) {
            res[2]++;
            a[2]++;
        }else if(key == 3) {
            res[3] += temp;
            a[3]++;
        }else if(key == 4) {
            a[4]++;
            if(temp > res[4])
                res[4] = temp;
        }
    }

    
    if(a[0] == 0) printf("N ");
    else printf("%d ", res[0]);

    if(a[1] == 0) printf("N ");
    else printf("%d ", -res[1]);

    if(a[2] == 0) printf("N ");
    else printf("%d ", a[2]);

    if(a[3] == 0) printf("N ");
    else printf("%.1f ", (double)res[3]/a[3]);

    if(a[4] == 0) printf("N");
    else printf("%d", res[4]);

    return 0;
}

