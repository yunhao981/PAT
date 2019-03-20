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
	int l,n;
	scanf("%d %d",&l,&n);
	
	vector<int> ans;
	long long rn = pow(26,l) - n;
//	printf("%lld", rn);
	
	while(rn != 0){
		int temp = rn % 26;
		rn /= 26;
		ans.push_back(temp);
	}
	
	for(auto it = ans.end()-1; it>=ans.begin(); it--){
		printf("%c", *it + 'a');	
	}

	return 0;
}

