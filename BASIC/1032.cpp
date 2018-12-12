#include <cstdio>
using namespace std;
const int MAXN = 100010;
int main(){
    int score[MAXN] = {0};
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int school, point;
        scanf("%d %d",&school, &point);
        score[school] += point;
    }

    int k = 1; 
    int max = -1;
    for(int i=1; i<=n; i++){
        if(score[i] > max) {
            max = score[i];
            k = i;
        }
    }
    printf("%d %d", k, max);
    return 0;
}