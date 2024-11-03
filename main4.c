#include <stdio.h>
int main () {
    int a, s, d;
    printf("sonni kiriting: ");
    scanf("%d", &a);
    while(a != 0) {
        if(a < 1000 || a > 9999){
        }
        d = a % 10;
        s = s * 10+ d;
        a /= 10;
    }
    printf("%d\n", s);

    return 0;
}