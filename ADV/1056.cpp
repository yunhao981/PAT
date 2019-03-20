#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
const int maxn = 1010;
struct Mouse {
    int weight;
    int rank;
}mouse[maxn];

int main(){
    int np, ng;
    scanf("%d %d", &np, &ng);
    for(int i=0; i<np; i++){
        scanf("%d", &mouse[i].weight);
    }

    queue<int> q;
    
    
}