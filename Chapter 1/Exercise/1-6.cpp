#include <iostream>
#include <algorithm>
using namespace std;
int a[3];
int main() {
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if (a[0]+a[1]<=a[2])
        cout<<"not a traingle"<<endl;
    else {
        if (a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}