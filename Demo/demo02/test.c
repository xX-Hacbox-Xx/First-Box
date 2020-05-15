#include <stdio.h>
int main()
{
    int *p;
    int a;
    scanf("%d",&a);
    p=&a;
    printf("a=%d,p=%d",a,p);
    getchar();
}