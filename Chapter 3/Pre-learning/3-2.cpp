#include <cstdio>
#include <cstring>
#define maxn 1005
bool a[maxn];
int n,k;
int main() {
    scanf("%d %d",&n,&k);
    memset(a,0,sizeof(a)); // 0 means closed
    for (int i=1;i<=k;++i) 
        for (int j=1;j<=n;++j) 
            if (j%i==0)
                a[j]=!a[j];
    for (int i=1;i<=n;++i)
        if (a[i])
            printf("%d ",i);
    printf("\n");
    return 0;   
}