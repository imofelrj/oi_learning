#include <cstdio>
#define INF 1000000000
int x,sum,counts,min=INF,max=-INF;
int main() {
    while (scanf("%d",&x)!=EOF) {
        sum+=x;
        if (x<min)  min=x;
        if (x>max)  max=x;
        ++counts;
    }
    printf("%d %d %.3f\n",min,max,(double)sum/counts);
    return 0;
}