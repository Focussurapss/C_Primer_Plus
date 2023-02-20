#include<stdio.h>
#define bits 8
int main()
{
    float speed, size, time;
    
    printf("please enter net speed(Mb/s):");
    scanf("%f",&speed);
    printf("then, enter file size(MB):");
    scanf("%f",&size);
    time=size*bits/speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes\n",
    speed,size);
    printf("down loads in %.2f seconds\n",time);
    
    return 0;
}