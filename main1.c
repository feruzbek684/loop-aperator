#include <stdio.h>
int main () {
    int a, b = 0;
    scanf("%d", &a);
    do
    {
        a /= 10;
        b ++;
    } while (a > 0);
    printf("%d", b);
    return 0;
    
}