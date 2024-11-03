#include <stdio.h>
int main () {
    int a, b = 1, odd = 0, even = 0;
    while (b <= 5)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even = even + a;
        }else
        {
            odd = odd + a;
        }
        b ++;
        
    }
    printf("%d ", even);
    printf("%d ", odd);
    return 0;
    
}