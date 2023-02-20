#include<stdio.h>
#include<string.h>
#define number 20
int main()
{
    char name[number], surname[number];
    int num, num2;

    printf("Please enter your name:");
    scanf("%s",name);
    printf("Please enter your surname:");
    scanf("%s",surname);
    num=strlen(name);
    num2=strlen(surname);
    printf("%s %s\n",name,surname);
    printf("%*d %*d\n",num,num,num2,num2);
    printf("%s %s\n",name,surname);
    printf("%-*d %-*d\n",num,num,num2,num2);

    return 0;
}