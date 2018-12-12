#include <cstdio>
using namespace std;
int main(){
    long long a,b,pa,pb;
    long long result;
    int da,db;
    pa = 0;
    pb = 0;
    scanf("%lld %d %lld %d", &a, &da, &b, &db);
    while(a!=0) {
        if(da == a%10) pa = pa * 10 + da;
        a /= 10;
    }

    while(b!=0) {
        if(db == b%10) pb = pb * 10 + db;
        b /= 10;
    }

    printf("%lld", pa + pb);
    return 0;
}