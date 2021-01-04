#include <cstdio>
#include <cstring>
#define maxn 110
int a[maxn],n=0,temp;
int main() {
    memset(a,0,sizeof(a));
    while (scanf("%d", &temp)!=EOF)
        a[n++]=temp;
    for (int i=n-1;i>=0;--i)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}