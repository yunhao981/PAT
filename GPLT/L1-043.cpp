#include <iostream>
#include <cstdio>
using namespace std;
struct book {
    // int sh=-1;
    // int sm=-1;
    // int eh=-1;
    // int em=-1;
    int minute=0;
    bool S = false;
    // bool E = false;
};

int main(){
    book b[1010];
    int n;
    cin>>n;

    int id = -1;
    char op;
    int th,tm;
    double sum=0.0;
    int avg=0;
    int num=0;
    for(int i=0; i<n; i++){
        while(id != 0){
            scanf("%d %c %d:%d", &id, &op, &th, &tm);
            if(id == 0){
                break;
            } else if (op == 'S'){
                b[id].minute = th * 60 + tm;
                b[id].S = true;
            } else if (op == 'E'){
                if(b[id].S){
                    // b[id].E = true;
                    sum += th * 60 + tm - b[id].minute;
                    b[id].minute = 0;
                    num++;
                    b[id].S = false;
                }
            }
        }
        if(num!=0){
            sum /= num;
        }
        avg = sum + 0.5f;
        printf("%d %d\n", num, avg);
    }
    return 0;
}