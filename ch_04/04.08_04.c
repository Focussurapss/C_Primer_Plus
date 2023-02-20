#include<stdio.h>
#define number 20
#define feet_per_inch 12
int main()
{
    float height, feet;
    char name[number];

    printf("Please enter your height in inch:");
    scanf("%f",&height);
    printf("then, enter your name:");
    scanf("%s",name);
    feet=height/feet_per_inch;
    printf("%s, you are %.3f feet tall.",name,feet);
    return 0;
}