#include<stdio.h>
int main()
{
    int divisor,dividend,quotient,remainder;

    printf("Enter the Dividend : ");
    scanf("%d",&dividend);

    printf("Enter the divisor : ");
    scanf("%d",&divisor);

    quotient = dividend / divisor ;
    remainder = dividend % divisor ;

    printf(" quotient is %d\n",quotient);
    printf(" remainder is %d\n",remainder);
    return 0;

}