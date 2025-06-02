#include<stdio.h>
int main(){
int age;
printf("Enter your age: ");
scanf("%d",&age);

if(age >=13 && age <= 19 ){
    printf("you are teen ager");
}
else{
    printf("you are not teen ager! ");
}
return 0;
}