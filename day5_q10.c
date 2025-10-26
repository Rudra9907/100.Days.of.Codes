#include <stdio.h>

int main()
{
        int h,m,s,ls;
        printf("enter seconds:");
        scanf("%d", &s);

        h= s/3600;
        ls= s%3600;

        m= ls/60;
        ls= ls%60;

        printf("%d:%d:%d", h, m, ls);
        return 0;
}

