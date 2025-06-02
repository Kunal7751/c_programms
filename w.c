#include<stdio.h>
int main(){
    int i=18;
    int b;
    while(i!=b){
        printf("Enter the value");
        scanf("%d",b);
        if(i>b ){
        printf("your are not adult\n",b);
        }
        else if(b<=18){
            printf("you are  adult\n");
        }
        else {
           
            break;
        }
    }
    return 0;
}