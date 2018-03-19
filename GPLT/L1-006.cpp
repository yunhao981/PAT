#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;

    int max = sqrt(n);

    int end,start;
    int i;
    for(int len = 12; len >= 1; len--){
        for(start = 2; start <= max; start++){
            long long int ans = 1;
            for(i=start; i-start <= len-1; i++)
                ans *= i;
            if(n % ans == 0){

            }
        }
    }
}