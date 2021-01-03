#define LOCAL
#include <cstdio>
#define INF 0x3f3f3f3f
int t,counts;
void cal(int num) {
    int x=0,min=INF,max=-INF;
    double sum=0;
    for (int i=0;i<num;++i) {
        scanf("%d",&x);
        sum+=x;
        if (x<min)  min=x;
        if (x>max)  max=x;
    }
    printf("%d %d %.3f\n",min,max,sum/num);
}
int main() {
#ifdef LOCAL
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
    while (scanf("%d",&t)!=EOF && t!=0) {
        ++counts;
        printf("Case %d: ",counts);
        cal(t);
    }
    return 0;
}