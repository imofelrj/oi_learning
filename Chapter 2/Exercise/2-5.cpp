#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
double a,b,c;
int main() {
    while (cin>>a>>b>>c && a!=0 && b!=0 && c!=0) {
        long double ans=a/b;
        cout<<fixed<<setprecision(c)<<ans<<endl;
    }
    return 0;
}