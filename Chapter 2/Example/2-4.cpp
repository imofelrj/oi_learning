#include <iostream>
using namespace std;
int n;
unsigned long long ans;
inline unsigned long long factorial(int n) {
    unsigned long long res=1;
    for (int i=2;i<=n;++i)
        res *= i;
    return res;
}
int main() {
    cin>>n;
    for (int i=1;i<=n;++i)
        ans += factorial(i);
    cout<<ans<<endl;
    return 0;
}