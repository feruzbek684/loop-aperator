#include <stdio.h>
int main () {
    int a, b,  sum = 0;
    scanf("%d%d", &a,&b);
    do
    {
        sum = sum + a;
        printf("%d ", a);
        a ++;
    } while (a <= b);
    printf("\n%d", sum);
    return 0;
    
}