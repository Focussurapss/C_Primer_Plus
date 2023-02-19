#include<stdio.h>
#define mass_per_mole 3.0e-23
#define mass_per_quart 950
int main()
{
    double quart,molecules;

    printf("请输入水的夸脱数：");
    scanf("%lf",&quart);
    molecules=quart*mass_per_quart/mass_per_mole;
    printf("%e克水分子的数量是:%e\n",quart,molecules);
    
    return 0;
}