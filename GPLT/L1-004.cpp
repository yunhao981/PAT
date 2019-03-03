#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int c;
    double f;
    cin>>f;
    c = (int) 5 * (f - 32) / 9;
    printf("Celsius = %d\n", c);
    return 0;
}