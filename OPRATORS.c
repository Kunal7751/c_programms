#include<stdio.h>
int main()
{
    int A = 10;
    int B = 20;    
    int sum = A + B;
    int sub = A - B;
    int multiply = A * B;
    int divide = A / B;
    int modulus = A%B;

    printf("The sum is = %d \n" ,sum);
    printf("The sub is = %d \n" ,sub);
    printf("The multiply is = %d \n" ,multiply);
    printf("The divide is = %d \n" ,divide);
    printf("THe modulus is = %d \n" ,modulus);

    return 0; 
}