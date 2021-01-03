#include <iostream>
using namespace std;
int used[10],judge[10];
void print() {
    if (true)
        for (int i=1;i<=9;++i) {
            cout<<used[i];
            if (i%3==0) cout<<" ";
        }
        cout<<endl;
}
void dfs(int k) {
    if (k==9) 
        print();
}