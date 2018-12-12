#include <cstdio>
#include <cmath>
using namespace std;
int main(){
    int c1, c2;
    const int clk = 100;
    scanf("%d %d", &c1, &c2);
    double ticks = (c2 - c1) / clk;

    int seconds = round(ticks);

    int hh = seconds / 3600;
    int mm = (seconds / 60 ) % 60;
    int ss = seconds % 60;

    printf("%02d:%02d:%02d",hh,mm,ss);
    return 0;
}