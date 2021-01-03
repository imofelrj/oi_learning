#include <cstdio>
int main() {
    int n, m;
    double sum;
    while (scanf("%d %d", &n, &m) && n != 0 && m != 0) {    
        sum = 0.00;
        while(n<=m) {
            sum+=1.0000000/n/n;
            n++;
        }
        printf("%.5lf\n",sum);
    }
    return 0;
}