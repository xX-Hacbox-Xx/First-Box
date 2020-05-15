#include <stdio.h>
int main(){
    float *p;
    p=malloc(sizeof(float));
    if ((p=malloc(sizeof(float)))==NULL)
    {
        printf("Not able to allocate memory.\n");
        exit(1);
    }
    *p=5.0;
    printf("\n*p=%f",*p);
    *p =*p+5.0;
    /*int n=3;
    printf("n=%d",n);
    int *p;
    */
    //void free (void *)
    return 0;
}