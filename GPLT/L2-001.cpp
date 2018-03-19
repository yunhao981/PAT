#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

//一般这个值足够大，也方便memset之类的操作，同时 inf + inf = inf
const int inf = 0x3f3f3f;

//城市个数，道路条数，出发编号，目的地编号
int N,M,S,D;

//记录图
int map[550][550];


int val[550],dis[550],vis[550],cnt[550],sum[550],pre[550];
//  每个点的权值，到s的距离，标记，路径数量，最大救援队，前驱

//输出路径
//如果d有前驱，输出到d前驱的路径，随后输出d的前驱
void path(int d){
    if(pre[d] != -1){
        path(pre[d]);
        printf("%d ",pre[d]);
    }
}

int main(){
    scanf("%d %d %d %d", &N, &M, &S, &D);
    int i,j;

    //保存每个点的权值
    for(i=0;i<N;i++){
        scanf("%d",val + i);
    }

    //初始化图。自己到自己的距离为0，否则就默认inf
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i == j)map[i][j]=0;
            else map[i][j] = inf;
        }
    }

    //保存图 x到y的距离是z
    int x,y,z;
    for(i=0;i<M;i++){
        scanf("%d %d %d",&x,&y,&z);
        map[x][y] = z;
        map[y][x] = z;
    }


    //初始化
    for(i=0;i<N;i++){
        dis[i]=inf;
        vis[i]=0;
        cnt[i]=0;
        sum[i]=0;
        pre[i]=-1;
    }

    //初始化起点
    dis[S]=0;
    vis[S]=1;
    cnt[S]=1;
    sum[S]=val[S];

    //这里开始像是魔法一样完全看不懂
    //dijkstra？

    //对每个城市而言
    for(i=0;i<N;i++){

        //最小的 n 初始化为inf，最小的 i 初始化为 S
        int minn = inf, mini = S;


        for(j=0;j<N;j++){

            //
            if(vis[j] == 0 && minn > dis[j]){
                minn = dis[j];
                mini = j;
            }
        }



        vis[mini] = 1;

        for(j=0;j<N;j++){
            if(vis[j]==0){
                if(dis[j] > dis[mini] + map[mini][j]){
                    dis[j] = dis[mini] + map[mini][j];
                    sum[j] = sum[mini] + val[j];
                    cnt[j] = cnt[mini];
                    pre[j] = mini;
                }


                else if(dis[j] == dis[mini] + map[mini][j]){
                    cnt[j] = cnt[mini] + cnt[j];
                    if(sum[j] < sum[mini] + val[j]){
                        sum[j] = sum[mini] + val[j];
                        pre[j] = mini;
                    }
                }
            }
        }
    }

    printf("%d %d\n", cnt[D], sum[D]);
    path(D);
    printf("%d\n", D);
    return 0;
}
