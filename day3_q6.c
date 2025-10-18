#include <stdio.h>

int main()
{
        int a, b, c;

        printf("any two numbers a and b:");
        scanf("%d %d", &a, &b);

        c=a;
        a=b;
        b=c;


        printf("%d is a now, %d is b now", a, b);

        return 0;
}


