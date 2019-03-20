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
		int n;
		int m;
		int k;
		scanf("%d",&n);
		vector<set<int>> v(n);

		for(int i=0; i<n; i++){
			scanf("%d", &m);
			int temp;
			for(int j=0; j<m; j++){
				scanf("%d",&temp);
				v[i].insert(temp);
			}
		}
		
		scanf("%d",&k);
		for(int i=0; i<k; i++){
			int a,b;
			scanf("%d %d",&a,&b);
			a--;b--;
			int nc=0;
			int nt=v[b].size();
			for(auto iter=v[a].begin(); iter != v[a].end(); iter++){
				if(v[b].find(*iter) == v[b].end()){
					nt++;
				}else{
					nc++;
				}
			}
			double ans = (double) nc / nt * 100;
			printf("%.2lf%%\n",ans);
		}
		
	return 0;
}


