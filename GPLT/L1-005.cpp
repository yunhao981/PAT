#include <iostream>
using namespace std;

typedef struct {
    string id;
    int test;
    int exam;
}Stu;

int main(){
    int n;
    cin>>n;
    Stu stu[n];
    int i,j;
    for(i=0;i<n;i++){
        cin>>stu[i].id;
        cin>>stu[i].test;
        cin>>stu[i].exam;
    }

    int m;
    cin>>m;

    int temp;
    for(i=0;i<m;i++){
        cin>>temp;
        for(j=0;j<n;j++){
            if(stu[j].test == temp){
                cout<<stu[j].id<<" "<<stu[j].exam<<endl;
                break;
            }
        }
    }
    return 0;

}