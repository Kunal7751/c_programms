#include<stdio.h>
int main(){
int a;
printf("Enter the value");
scanf("%d",&a);
if(a%2==0){
    goto even;
}
else{
    goto odd;
}
even:
printf("the given vaalue is even");
return 0;
odd:
printf("The given value is odd");
return 0;
}