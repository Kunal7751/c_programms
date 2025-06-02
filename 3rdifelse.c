#include<stdio.h>
int main(){
    int age;
    char gender;
    printf("Enter the age :");
    scanf("%d",&age);
    printf("Enter the gen :");
    scanf(" %c",&gender);

    if(age>=18 && age<100){
        if (gender=='m'){
            printf("You cand vote");
        }
        else{
            printf("sorry this is only male votting ");
        }
    }else if(age<18){
        printf("you are not adult");
    }
   
    else{
        printf("Invalid age enter");
    }
    return 0;
}