#include <iostream>
using namespace std;
int main(){
    string s[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    string num;
    cin>>num;
    int index = 0;
    bool minus = num[0]=='-';
    if(minus){
        cout<<"fu ";
        index = 1;
    }
    for(int i=index; i<num.length(); i++){
        cout<<s[num[i]-'0'];
        if(i!=num.length()-1)cout<<" ";
    }

    return 0;
}