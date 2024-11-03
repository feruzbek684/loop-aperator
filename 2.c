#include <stdio.h>
int main () {
    int a, b, sum = 0;
    scanf("%d%d", &a,&b);
    while (a <= b)
    {
        sum = sum + a;
        printf("%d ", a);
        a ++;
    }
    printf("\n%d", sum);
    return 0;
    
    
}