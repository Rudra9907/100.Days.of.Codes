#include <stdio.h>

int main()
{
        int r;
        int pi = 3.14;

        printf("enter the radius of the circle:");
        scanf("%d", &r);

        printf("area of circle:%d\n", (pi*r*r));
        printf("perimeter of the circle:%d\n", (2*pi*r));

        return 0;
}

