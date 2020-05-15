#include <stdio.h>
int main()
{
    int a[10] = {3, 12, 9, 8, 6, 23, 45, 2, 7, 17};
    int i, t, j;
    for (j = 0; j < 9; j++)
    {

        for (i = 0; i < 9 - j; i++)
        {

            if (a[i] > a[i + 1])
            {

                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}