#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <string>
using namespace std;

int findMin(int* nm[], int start, int end){
	int k=0x3f3f3f;
	for(int i=start; i<end; i++){
		if(nm[i]<k){
			k = nm[i];
		}
	}
	return k;
}

int main(){
	int nsmap[60][60] = -1;
	int n;
	int sum;
	string s[60];
	
//	scanf("%d %d", &n, &sum);
	cin>>n>>sum;
	for(int i=0; i<n; i++){
//		scanf("%s",&s[i]);
		cin>>s[i];
	}
	
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			nsmap[i][j] = sum;
		}
	}

	
	int m;
//	scanf("%d", &m);
	cin>>m;
	for(int i=0; i<m; i++){
		string s1,s2;
		int tmp;
		cin>>s1>>s2>>tmp;
		
		
		
	}
	
	return 0;
}
