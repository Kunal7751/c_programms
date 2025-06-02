#include<stdio.h>
int main(){
int a;
printf("Enter the value: ");
scanf("%d",&a);

if(a % 2 !=0){
    printf("The value is odd !");
}
else{
    printf("The value is even");
}

return 0;
}