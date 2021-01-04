#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <iomanip>
using namespace std;
map<char,double> mir;
char s[105];int n=0;
inline void init() {
    mir['C']=12.01;
    mir['H']=1.008;
    mir['O']=16.00;
    mir['N']=14.01;
    memset(s,0,sizeof(s));
}
inline int getnum(int start,int end,char *s) {
    int res=0;
    if (start==end) return s[start]^48;
    else 
        for (int i=start;i<=end;++i)
            res=(res<<1)+(res<<3)+(s[i]^48);
    return res;
}
inline void getans() {
    init();
    double ans=0.0,present=0.0;
    scanf("%s",s);
    for (int i=0;i<strlen(s);) {
        char ch=s[i];present=mir[ch];int j=0;
        if (s[i+1]>'0'&&s[i+1]<='9') {
            for (j=i+1;j<strlen(s)&&isdigit(s[j]);++j);
            j-=1;
            ans+=mir[ch]*getnum(i+1,j,s);
            i=j+1;
        }
        else {
            ans+=mir[ch];
            ++i;
        }
    }
    cout<<fixed<<setprecision(3)<<ans<<endl;
}
int main() {
    scanf("%d",&n);
    while (n--) 
        getans();
    return 0;
}