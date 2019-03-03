#include <iostream>
#include <cstdio>
using namespace std;
const int maxn=110;
int main(){
    int ca,ra,cb,rb;
    int cc,rc;
    int t;
    int a[maxn][maxn];
    int b[maxn][maxn];
    int ans[maxn][maxn];
    cin>>ra>>ca;
    for(int i=0; i<ra; i++){
        for(int j=0; j<ca; j++){
            cin>>t;
            a[i][j]=t;
        }
    }

    cin>>rb>>cb;
    for(int i=0; i<rb; i++){
        for(int j=0; j<cb; j++){
            cin>>t;
            b[i][j]=t;
        }
    }

    if(ca!=rb){
        cout<<"Error: "<<ca<<" != "<<rb<<endl;
    }else{
        rc = ra;
        cc = cb;
        for(int i=0; i<rc; i++){
            for(int j=0; j<cc; j++){
                ans[i][j] = 0;
            }
        }

        for(int i=0; i<rc; i++){
            for(int j=0; j<cc; j++){
                for(int k=0; k<ca; k++){
                    ans[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        cout<<rc<<" "<<cc<<endl;
        for(int i=0; i<rc; i++){
            for(int j=0; j<cc; j++){
                cout<<ans[i][j];
                if(j!=cc-1)cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}