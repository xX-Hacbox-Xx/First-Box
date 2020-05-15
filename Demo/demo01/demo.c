#include <stdio.h>
int main()
{
    int n, i, j, t, k;
    int a[5], b[6];
    printf("初始化有序数组:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("输入插入的数字:");
    scanf("%d", &k);
    for (i = 0; i <= 5; i++)
    {
        if (i == 5)
            b[i] = k;
        else
            b[i] = 0;
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            b[j] = a[i++];
        }
    }
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 5 - j; i++)
        {
            if (b[i] > b[i + 1])
            {
                t = b[i];
                b[i] = b[i + 1];
                b[i + 1] = t;
            }
        }
    }
    for (j = 0; j < 6; j++)
    {
        printf("%d ", b[j]);
    }
    return 0;
}