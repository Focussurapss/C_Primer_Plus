#include<stdio.h>
#include<string.h>
#define number 20
int main()
{
    char name[number];
    int num;
    
    printf("请输入你的名字:");
    scanf("%s",name);
    num=strlen(name);
    printf("a.你好,\"%s\"\n",name);
    printf("b.你好,\"%20s\"\n",name);
    printf("c.你好,\"%-20s\"\n",name);
    printf("d.你好,\"%*s\"\n",num+3,name);
    
    return 0;
}