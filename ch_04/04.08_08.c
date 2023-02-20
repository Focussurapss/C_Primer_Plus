#include<stdio.h>
#define L 3.785
#define km 1.609
int main()
{
    float mile, gas, mile_gas;
    
    printf("请输入旅行的里程(英里):");
    scanf("%f",&mile);
    printf("请输入消耗的汽油量(加仑):");
    scanf("%f",&gas);
    mile_gas=mile/gas;
    printf("每加仑行驶的英里数是：%.1f\n",mile_gas);
    printf("英里/加仑的值转为升/公里=%.1f\n",
    gas*L/(mile*km));
    
    return 0;
}