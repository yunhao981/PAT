#include <cstdio>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int a,b;
    a=0;
    b=0;
    for(int i=0; i<n; i++){
        int a_call, a_show, b_call, b_show;
        scanf("%d %d %d %d", &a_call, &a_show, &b_call, &b_show);
        int call = a_call + b_call;
        if(call == a_show && call != b_show) {
            b++;
        }else if(call == b_show && call != a_show) {
            a++;
        }else{
            continue;
        }
    }
    printf("%d %d", a,b);
    return 0;
}