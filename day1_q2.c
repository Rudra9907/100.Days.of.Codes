#include <stdio.h>

int main()
{
        int x, y;

        printf("enter any 2 numbers:");
        scanf("%d%d",&x,&y);

        if (y != 0)
        {

                printf("\n addition: %d\n", x+y);
                printf("subtraction: %d\n", x-y);
                printf("multipliction: %d\n", x*y);
                printf("division: %f\n", (float) x/y);
        }

        else
        {

                printf("addition: %d\n", x+y);
                printf("subtraction: %d\n", x-y);
                printf("multipliction: %d\n", x*y);
                printf("divison is invalid");

        }

        return 0;
}

