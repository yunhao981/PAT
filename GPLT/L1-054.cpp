#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#include <map>
using namespace std;
int main(){
	char c;
	int n;
	scanf("%c %d",&c,&n);
	
	char a[110][110];
	char b[110][110];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			char t;
			scanf("%c",&t);
			a[i][j] = t;
			b[n-i+1][n-j+1] = t;
		}
		getchar();
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<=n; j++){
			printf("%c", a[i][j]);
		}
//		printf("\n");
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%c", b[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

