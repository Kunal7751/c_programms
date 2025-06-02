#include<stdio.h>
int main(){
    int a=5000,wa;
    ram:
    printf("Enter the withdrawal ammount ");
    scanf("%d",&wa);
    if(a>5000 && a<=5000)
    {
        printf("invalid amount\n");
    }
    else{
        a=a-wa;
        printf("Amount withdraw succssful\n");
        printf("your current balnce is: %d\n",a);
    }
    char ch;
    printf("Do you want to continue y/n ",ch);
    scanf(" %c",&ch);
    if (ch=='y'){
        goto ram;
    }
    else{
        printf("Thank uh for using atm");
    }
    
return 0;

}