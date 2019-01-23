#include <stack>
#include <cstdio>
using namespace std;
const int maxn = 1010;
int main(){
    int m,n,k;
    scanf("%d %d %d", &m, &n, &k);
    stack<int> st;
    int a[maxn];
    for(int i=0; i<k; i++){
        while(!st.empty()){
            st.pop();
        }

        for(int j=1; j<=n; j++){
            scanf("%d", &a[j]);
        }

        int current = 1;
        bool flag = true;
        
        for(int j=1; j<=n; j++){
            st.push(j);
            if(st.size()>m){
                flag = false;
                break;
            }

            while(!st.empty() && st.top() == a[current]){
                st.pop();
                current++;
            }
        }        
        if(st.empty() && flag){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}