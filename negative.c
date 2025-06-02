#include<stdio.h>
int main(){
int num;
printf("Enter the num:");
scanf("%d",&num);

if(num<0){
    printf("The num is nagative");
}
else{
    printf("The num is possitive");
}
return 0;
}