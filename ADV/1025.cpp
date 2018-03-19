#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

struct Student{
    char regNumber[15];
    int score;
    int finRank;
    int locNumber;
    int locRank;
}stu[30000];

bool cmp(Student a, Student b){
    if(a.score != b.score)return a.score > b.score;
    else return strcmp(a.regNumber, b.regNumber) < 0;
}

int main(){
    int n;
    int k[100]={0};
    int num = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&k[i]);
        for(int j = 0; j < k[i]; j++){
            scanf("%s %d",stu[num].regNumber,&stu[num].score);
            stu[num].locNumber = i+1;
            num++;
        }
        sort(stu+num-k[i], stu+num, cmp);
        stu[num-k[i]].locRank = 1;
        for(int j = num - k[i] + 1; j < num; j++){
            if(stu[j].score == stu[j-1].score){
                stu[j].locRank = stu[j-1].locRank;
            }else{
                stu[j].locRank = j + 1 - num + k[i];
            }
        }
    }
    printf("%d\n",num);
    sort(stu, stu+num, cmp);
    int r = 1;
    stu[0].finRank=1;
    for(int i = 0; i < num; i++){
        if(i>0 && stu[i].score != stu[i-1].score){
            r = i + 1;
        }
        printf("%s ",stu[i].regNumber);
        printf("%d %d %d\n",r,stu[i].locNumber,stu[i].locRank);

    }
    return 0;
}