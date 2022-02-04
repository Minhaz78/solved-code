#include<stdio.h>
int main()
{

    double loan,interest,years,total_amount,monthly;
    printf("enter the loan:");
    scanf("%lf",&loan);
    printf("enter the interest:");
    scanf("%lf",&interest);
    printf("enter the years:");
    scanf("%lf",&years);
    total_amount=loan+loan+interest*years/100.00;
    monthly=total_amount/(years*12);
    printf("total_amount:%0.21f\n",total_amount);
printf("monthly:%0.21f\n",monthly);


}
