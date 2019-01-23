#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    int awin = 0;
    int bwin = 0;
    int draw = 0;
    char awm = 'B';
    char bwm = 'B';

    //0C 1J 2B
    int a[3]={0};
    int b[3]={0};

	cin>>n;    
    for(int i=0; i<n; i++){
        char tmp1, tmp2;
		cin>>tmp1>>tmp2;    
		
        if(tmp1 == 'C') {
            if(tmp2 == 'C'){
                draw++;
            }else if(tmp2 == 'J'){
                awin++;
                a[0]++;
            }else if(tmp2 == 'B'){
                bwin++;
                b[2]++;
            }
        }

        else if(tmp1 == 'J') {
            if(tmp2 == 'C'){
                bwin++;
                b[0]++;
            }else if(tmp2 == 'J'){
                draw++;
            }else if(tmp2 == 'B'){
                awin++;
                a[1]++;
            }
        }

        else if(tmp1 == 'B') {
            if(tmp2 == 'C'){
                awin++;
                a[2]++;
            }else if(tmp2 == 'J'){
                bwin++;
                b[1]++;
            }else if(tmp2 == 'B'){
                draw++;
            }
        }
    }

    int max=-1;
    int key=-1;

    int bmax = -1;
    int bkey = -1;

	int t = a[0];
	a[0] = a[1];
	a[1] = t;
	
	t = b[0];
	b[0] = b[1];
	b[1] = t;
	
    for(int i=0; i<3; i++){
        if(a[i]>=max){
            key = i;
            max = a[i];
        }
        if(b[i]>=bmax){
            bkey = i;
            bmax = b[i];
        }
    }

    switch(key){
        case 0:
            awm = 'J';
            break;
        case 1:
            awm = 'C';
            break;
        case 2:
            awm = 'B';
            break;
    }

    switch(bkey){
        case 0:
            bwm = 'J';
            break;
        case 1:
            bwm = 'C';
            break;
        case 2:
            bwm = 'B';
            break;
    }
	
    printf("%d %d %d\n", awin, draw, bwin);
    printf("%d %d %d\n", bwin, draw, awin);
    printf("%c %c\n",awm, bwm);
    return 0;
}
