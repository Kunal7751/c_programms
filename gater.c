#include<stdio.h>
int main(){
int a,b,sum;
printf("Enter the first value :");
scanf("%d",&a);
printf("Enter the first value :");
scanf("%d",&b);
sum=a+b;
if(sum > 100){
    printf("the sum of two value is grater than 100");
}
else{
    printf("The sum is less than 100!");
}
return 0;
}