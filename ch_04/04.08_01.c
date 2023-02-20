#include<stdio.h>
#define number 20
int main()
{
    char name[number];
    char surname[number];
    
    printf("请输入你的名:");
    scanf("%s",name);
    printf("请输入你的姓:");
    scanf("%s",surname);
    printf("你好,%s, %s\n",name,surname);
    
    return 0;
}