/*
    Input 1: 234    Output 1:432
    Input 2: 250    Output 2:52 (no 0)
*/
#include <cstdio>
int a,ans;
int main() {
    scanf("%d",&a);
    ans=(a%10)*100+(a/10%10)*10+(a/100);
    printf("%d\n",ans);
    return 0;
}