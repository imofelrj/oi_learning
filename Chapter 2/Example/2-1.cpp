#include <iostream>
#include <cmath>
using namespace std;
int iijj,st;
int main() {
    for (int i=1;i<=9;++i) {
        for (int j=0;j<=9;++j) {
            iijj=i*1100+j*11;
            st=sqrt(iijj);
            if (st*st==iijj)
                cout<<iijj<<" ";
        }
    }
}