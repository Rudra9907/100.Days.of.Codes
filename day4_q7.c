#include <stdio.h>

int main()
{
        int x, y;

        printf("enter any 2 random numbers:");
        scanf("%d%d", &x, &y);

        x= x+y;
        y= x-y;
        x= x-y;

        printf("after swap x=%d, y=%d", x, y);
        return 0;
}

