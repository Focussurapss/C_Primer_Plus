#include<stdio.h>
#include<float.h>
int main()
{
    double E_max=1.0/3.0;
    float U_max=1.0/3.0;
    
    printf("FLT_DIG=%d DBL_BIG=%d\n",FLT_DIG,DBL_DIG);
    printf("A.double E_max=%.6lf float U_max=%.6f\n",E_max,U_max);
    printf("B.double E_max=%.12lf float U_max=%.12f\n",E_max,U_max);
    printf("C.double E_max=%.16lf float U_max=%.16f\n",E_max,U_max);
    
    return 0;
}