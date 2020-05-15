#include <stdio.h>
struct student
{
    int num;
    char name[20];
    int score;
}; 
int main()
{
    struct student stud[10] = {{1, "张三", 99}, {2, "C", 90}, {3, "B", 95}, {4, "赵四", 96}, {5, "S", 88}, {6, "Q", 98}, {7, "黄九", 90}, {8, "刘瑞", 89}, {9, "康华", 87}, {10, "沈东", 93}};
    struct student t;
    int i;
    int j;
    for ( i = 0; i < 9; i++)
    {
        for ( j = 0; j < 9-i; j++)
        {
            if (strcmp(stud[j].name,stud[j+1].name)<0)
            {
                t=stud[j];
                stud[j]=stud[j+1];
                stud[j+1]=t;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("name:%s num:%d score:%d \n",stud[i].name,stud[i].num,stud[i].score);
    }
    
    return 0;
}