#include <iostream>
using namespace std;
int n,m,x,y;
int main() {
    cin>>n>>m;
    if (m%2==1)
        cout<<"No answer"<<endl;
    else {
        x=(4*n-m)/2;
        y=n-x;
        if (x<0 || y<0)
            cout<<"No answer"<<endl;
        else 
            cout<<x<<" "<<y<<endl;   
    }
    return 0;
}