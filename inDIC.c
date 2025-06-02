#include<stdio.h>
int  main()
{
    int n,n2;
    char name[100]="Kunal";
    printf("hello %s , In The First project\n ",name);

    printf("Tis the basic calculator for two no. addition\n ");

    printf("Enter the first value ");
    scanf("%d", &n);

    printf("Enter the second value\n ");
    scanf("%d", &n2);

    printf("The sum of %d and %d is : %d\n",n,n2,n+n2);
    printf("Thnaks to use project , programm and :");
    return 0;
}