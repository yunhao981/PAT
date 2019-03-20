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
	string s;
	getline(cin,s);
	int max = 0;
	int temp;
	
	for(int i=0; i<s.length(); i++){
		tem = 1;
		for(int j=1; j<s.length(); j++){
			if(i-j<0 || i+j>=len || s[i-j] != s[i+j]){
				break;
			}
			temp += 2;
		}
		max = temp > max ? temp : max;
		
		temp = 0;
		for(int j=1; j<s.length(); j++){
			if(i-j +1 <0 || i+j >= len || s[i-j+1] != s[i+j+1]){
				break;
			}
			temp += 2;
		}
		max = temp ? max ? temp : max;
	}
	cout<<max;
	return 0;
}

