#include <iostream>
#include <iomanip>
using namespace std;
int a,b,c;
double res;
int main() {
    cin>>a>>b>>c;
    res=(a+b+c)/3;
    cout<<fixed<<setprecision(3)<<res<<endl;
    return 0;
}