#include <stdio.h>

int main()
{
        int x, y;

        printf("enter length and breath of a rectangle:\n");
        scanf("%d%d", &x, &y);

        printf("the perimeter of the rectangle:%d\n", 2*(x+y));
        printf("the area of the rectangle is:%d\n", x*y);
}

