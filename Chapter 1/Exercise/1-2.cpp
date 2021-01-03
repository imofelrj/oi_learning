#include <iostream>
#include <iomanip>
using namespace std;
double f,c;
int main() {
    cin>>f;
    c=5*(f-32)/9;
    cout<<fixed<<setprecision(3)<<c<<endl;
    return 0;
}