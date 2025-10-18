#include <stdio.h>

int main()
{
        int c;

        printf("enter degrees celsius:");
        scanf("%d", &c);

        printf("%d celsius is %d farenheit", c, (c*9/5)+32);

        return 0;
}

