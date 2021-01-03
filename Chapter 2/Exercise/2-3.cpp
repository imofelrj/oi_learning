#include <cstdio>
int n;
int main() {
    scanf("%d",&n);
    int max=2*n-1;
    for (int i=2*n-1;i>0;i-=2) {
        for (int j=1;j<=(max-i)/2;j++)
            printf("  ");
        for (int j=1;j<=i;j++)
            printf("# ");
        printf("\n");
    }
    return 0;
}