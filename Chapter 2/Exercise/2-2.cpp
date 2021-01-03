#include <cstdio>
int a,b,c;
int main() {
    while (scanf("%d %d %d",&a,&b,&c)!=EOF) {
        int s=a*70+b*21+15*c;s%=105;
        if (s>100 || s<10)  printf("No answer\n");
        else    printf("%d\n",s);
    }
    return 0;
}