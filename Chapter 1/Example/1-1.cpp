#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double r,h,s;
const double pi = acos(-1);
int main() {
    cin>>r>>h;
    s = 2*pi*r*r+2*pi*r*h;
    cout<<fixed<<setprecision(3)<<s<<endl;
    return 0;
}