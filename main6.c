#include <stdio.h>
int main () { 
    int a, b, kopaytma;
    scanf("%d", &a);
    scanf("%d", &b);
    do
    {
        if (a % 4 == 0)
        {
            kopaytma = 2 * a;
            printf("%d ", kopaytma);
        }        
        a ++;      
    } while (a <= b);

    return 0;
      
}