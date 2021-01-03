#include <iostream>
using namespace std;
unsigned long long n,counts;
inline void change() {
    if (n%2==0) n/=2;
    else    n=3*n+1;
}
int main() {
    cin>>n;
    while (n!=1) {
        change();
        ++counts;
    }
    cout<<counts<<endl;
    return 0;
}