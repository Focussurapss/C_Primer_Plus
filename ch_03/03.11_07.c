#include<stdio.h>
#define cm_per_inch 2.54
int main()
{
    double inch,cm;

    printf("请输入身高（/英寸）:");
    scanf("%lf",&inch);
    cm=inch*cm_per_inch;
    printf("身高：%finch=%fcm\n",inch,cm);
    
    return 0;
}