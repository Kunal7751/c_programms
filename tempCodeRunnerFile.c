#include<stdio.h>
int main()
{
    double a,b,product;
    printf("Enter the floating value");
    scanf("%lf %lf",&a,&b);

    product = a*b;
    printf("The mul of two floating point is %.1lf * %.2lf = %.2lf",a,b,product);
    return 0;

}