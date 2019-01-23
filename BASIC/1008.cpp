#include <cstdio>
using namespace std;
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[110];
    m = m % n;
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int c=0;
    for(int i=n-m; i<n; i++) {
        printf("%d",a[i]);
        c++;
        if(c<n)printf(" ");
    }

    for(int i=0; i<n-m; i++){
        printf("%d",a[i]);
        c++;
        if(c<n)printf(" ");
    }

    return 0;
}