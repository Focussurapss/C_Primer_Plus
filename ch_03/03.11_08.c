#include<stdio.h>
#define cup_per_pint 2
#define ounce_per_cup 8
#define bigspoon_per_ounce 2
#define teaspoon_per_bigspoon 3
int main()
{
    double cup,pint,ounce,bigspoon,teaspoon;

    printf("请输入杯数：");
    scanf("%lf",&cup);
    pint=cup/cup_per_pint;
    ounce=cup*ounce_per_cup;
    bigspoon=ounce*bigspoon_per_ounce;
    teaspoon=bigspoon*teaspoon_per_bigspoon;
    printf("%lf杯=%lf品脱\n",cup,pint);
    printf("%lf杯=%lf盎司\n",cup,ounce);
    printf("%lf杯=%lf大汤勺\n",cup,bigspoon);
    printf("%lf杯=%lf茶勺\n",cup,teaspoon);
    
    return 0;
}