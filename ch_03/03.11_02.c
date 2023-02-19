#include<stdio.h>
int main()
{
    int ASCII;
    printf("请输入一个ASCII码值(0-127):");
    scanf("%d",&ASCII);
    printf("ASCII码值:%d,字符为:%c.\n",ASCII,ASCII);

    return 0;
}