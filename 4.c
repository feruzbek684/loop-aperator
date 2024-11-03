#include <stdio.h>
#include <math.h>
int main () {
    int k = 0, d, s, n, m = 0;
    scanf("%d", &n);
    d = n;
    while (d > 0)
    {
        d = d / 10;
        m ++;
    }

    while (n > 0)
    {
        s = n & 10;
        n = n / 10;
        k = k + s * pow(10,m-1);
        m --;
    }

    printf("teskarsi %d", k);
    
    return 0;
    
    
    
    return 0;
    
}