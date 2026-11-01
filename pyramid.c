#include <stdio.h>
int main()
{
    int i, j;
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf(" %d", i);

        for (int j = 1; j <= i; j++)
        {
            printf(" (%d %d)", i,j );
        }
        printf("\n");
    }

    return 0;
}