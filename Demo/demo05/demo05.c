#include <stdio.h>
#include <string.h>
struct friends_list     /*手机通讯录结构定义*/
{
    char name[10];      /* 姓名 */
    int age;            /* 年龄 */
    char telephone[13]; /* 联系电话 */
};
int Count = 0;
void new_friend(struct friends_list friends[]);
void search_friend(struct friends_list friends[], char *name);
void delete_friend(struct friends_list friends[], char *name);
int main()
{
    int choice;
    char name[10];
    struct friends_list friends[50]; /* 包含50个人的通讯录 */
    do
    {
        printf("手机通讯录功能选项：1:新建 2:查询 3:删除 0:退出\n");
        printf("请选择功能：");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            new_friend(friends);
            break;
        case 2:
            printf("请输入要查找的联系人名:");
            scanf("%s", name);
            search_friend(friends, name);
            break;
        case 3:
            printf("请输入要删除的联系人名:");
            scanf("%s", name);
            delete_friend(friends, name);
            break;
        case 0:
            break;
        }
    } while (choice != 0);
    printf("谢谢使用通讯录功能!\n");
    return 0;
}

void delete_friend(struct friends_list friends[], char *name)
{
    int i, flag = 0;
    if (Count == 0)
    {
        printf("通讯录是空的!\n");
        return;
    }
    for (i = 0; i < Count; i++)
        if (strcmp(name, friends[i].name) == 0)
        { /* 找到联系人*/
            flag = 1;
            break;
        }
    for (; i < Count; i++)
        friends[i] = friends[i + 1];
}
void new_friend(struct friends_list friends[])
{
    struct friends_list f;
    if (Count == 50)
    {
        printf("通讯录已满!\n");
        return;
    }
    printf("请输入新联系人的姓名:");
    scanf("%s", f.name);
    printf("请输入新联系人的年龄:");
    scanf("%d", &f.age);
    printf("请输入新联系人的联系电话:");
    scanf("%s", f.telephone);
    friends[Count] = f;
    Count++;
}
void search_friend(struct friends_list friends[], char *name)
{
    int i, flag = 0;
    if (Count == 0)
    {
        printf("通讯录是空的!\n");
        return;
    }
    for (i = 0; i < Count; i++)
        if (strcmp(name, friends[i].name) == 0)
        { /* 找到联系人*/
            flag = 1;
            break;
        }
    if (flag)
    {
        printf("姓名: %s\t", friends[i].name);
        printf("年龄: %d\t", friends[i].age);
        printf("电话: %s\n", friends[i].telephone);
    }
    else
       printf("无此联系人!");
}
