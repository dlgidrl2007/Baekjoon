#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b) {
        if (b >= c)
            printf("%d", b);
        else if (c >= a)
            printf("%d", a);
        else
            printf("%d", c);
    } else {
        if (a >= c)
            printf("%d", a);
        else if (c >= b)
            printf("%d", b);
        else
            printf("%d", c);
    }

    return 0;
}