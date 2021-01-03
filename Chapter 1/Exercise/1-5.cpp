#include <iostream>
#include <iomanip>
using namespace std;
int n;
double price;
int main() {
    cin>>n;
    if (n*95<300)
        price=n*95,cout<<fixed<<setprecision(2)<<price<<endl;
    else
        price=n*95*0.85,cout<<fixed<<setprecision(2)<<price<<endl;
    return 0;
}