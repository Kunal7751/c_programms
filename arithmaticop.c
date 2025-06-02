#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div,mod;

    printf("Enter two no.:");
    scanf("%d%d",&a,&b);


    sum = a+b;
    sub=a-b;
    mul=a*b;
    div = a/b;
    mod = a%b;

    printf("Addition is %d\n",sum);
    printf("subtraction is %d\n",sub);
    printf("multiplication is %d\n",mul);
    printf("division is %d\n",div);
    printf("modulus is %d\n",mod);

    return 0;


}