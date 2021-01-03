#include <iostream>
using namespace std;
int num[10],judge[10];
inline bool jdg() {
    double a=num[1]*100+num[2]*10+num[3];
    double b=num[4]*100+num[5]*10+num[6];
    double c=num[7]*100+num[8]*10+num[9];
    if (a==0.5*b && c==1.5*b)
        return true;
    return false;
}
inline void print() {
    if (jdg()) {
        for (int i=1;i<=9;++i) {
            cout<<num[i];
            if (i%3==0) cout<<" ";
        }
        cout<<endl;
    }
}
void dfs(int k) {
    if (k==9) { 
        print();
        return;
    }
    for (int i=1;i<=9;++i) {
        if (judge[i]==0) {
            judge[i]=1;
            num[k+1]=i;
            dfs(k+1);
            judge[i]=0;
        }
    }
}
int main() {
    dfs(0);
    return 0;
}