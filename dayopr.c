#include<stdio.h>
int main()
{
    int A;
    int B;
    
    printf("ENTER a & b value");
    scanf("%d %d",&A,&B);

    int sum = A + B;
    printf("The sum %d & %d is      %d\n",A,B,sum);

    int sub = A - B;
    printf("The sub %d & %d is      %d\n",A,B,sub);

    int multiply = A * B;
    printf("The multiply %d & %d is %d\n",A,B,multiply);

    int divide = A / B;
    printf("THe divide %d & %d is   %d\n",A,B,divide);

    int modulus = A%B;
    printf("THe modulus %d & %d is  %d\n",A,B,modulus);

    return 0; 
}