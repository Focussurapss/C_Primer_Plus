#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    int bigger_int=INT_MAX;
    float bigger_float=__FLT_MAX__;
    float small_float=__FLT_MIN__;

    printf("bigger_int=%d big_int+1=%d\n",
    bigger_int,bigger_int+1);
    printf("bigger_float=%e big_float*100.0=%e\n",
    bigger_float,bigger_float*100.0);
    printf("small_float=%e small_float*100.0=%e\n",
    small_float,small_float/100.0);
    
    return 0;
}