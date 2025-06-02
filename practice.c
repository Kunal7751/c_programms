#include<stdio.h>
int main()
{
    int A,B,sum;
    
    printf("Enter the value A:");
    scanf("%d",&A);
    printf("Enter the value B:");
    scanf("%d",&B);
    
    sum = A+B;
    printf("The sum of A%d + %dB=%d",A,B,sum);

    return 0;
}