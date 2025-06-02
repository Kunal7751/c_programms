#include<stdio.h>
int main(){
int marks;
printf("Enter your mrks:");
scanf("%d",&marks);
if(marks>=50)
{
    printf("Pass");
}
else
    printf("fail");
return 0;
}