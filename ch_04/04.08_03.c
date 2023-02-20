#include<stdio.h>
int main()
{
    float number;

    printf("Please enter a float number:");
    scanf("%f",&number);
    printf("a. The input is %.1f or %.1e.\n",number,number);
    printf("b. The input is %+.3f or %.3e.\n",number,number);

    return 0;
}