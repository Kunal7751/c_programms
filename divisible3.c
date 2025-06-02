#include<stdio.h>
int main(){
int num;
printf("enter the num: ");
scanf("%d",&num);
if(num % 3==0){
    printf("The num is divisible by 3");
}
else{
    printf("The num is not divisible by 3!");
}
return 0;
}