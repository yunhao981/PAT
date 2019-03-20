#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
using namespace std;
const int N = 20;
int main(){
	char plate[N+1][N+1];
	int n;
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%c",&plate[i][j]);
		}
		getchar();
	}
//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			printf("%c",plate[i][j]);
//		}
//	}
//	
	int wi=0;
	int wj=0;
	bool bwin=false;
	int count = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(bwin==true)break;
			if(plate[i][j] == '*'){
			
				//right
				count=1;
				
				for(int k=1; k<5; k++){
					if(plate[i][j+k]=='*'){
						count++;
					}
				}
				if(count==5){
					bwin=true;
					wi=i;
					wj=j;
					break;
				}
				
				//right up
				count=1;
				if(i>=4){
				for(int k=1; k<5; k++){
					if(plate[i-k][j+k]=='*'){
						count++;
					}
				}
				if(count==5){
					bwin=true;
					wi=i;
					wj=j;
					break;
				}
				}
				
				//right down
				count=1;
				if(i<n-4){
				for(int k=1; k<5; k++){
					if(plate[i+k][j+k]=='*'){
						count++;
					}
				}
				if(count==5){
					bwin=true;
					wi=i;
					wj=j;
					break;
				}
				//down
				count=1;
				for(int k=1; k<5; k++){
					if(plate[i+k][j]=='*'){
						count++;
					}
				}
				if(count==5){
					bwin=true;
					wi=i;
					wj=j;
					break;
				}
				}
			}
		}
	}
	
	if(bwin)printf("Win %d %d\n",wj-1,wi);
	else printf("Not yet\n");
	return 0;
}
