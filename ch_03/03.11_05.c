#include<stdio.h>
#define sec_per_year 3.156e7
int main()
{
    double age;
    double seconds;
    
    printf("请输入你的年龄：");
    scanf("%lf",&age);
    seconds=age*sec_per_year;
    printf("年龄：%lf=%e秒",age,seconds);
    
    return 0;
}