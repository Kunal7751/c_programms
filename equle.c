#include<stdio.h>
int main(){
int a,b;
printf("Enter first numbers: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d",&b);
if(a==b){
    printf("The numbers are equle !");
}
else {
    printf("The numbers are not equle !");
}
return 0;
}