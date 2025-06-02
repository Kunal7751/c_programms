#include<stdio.h>
int main(){
    int i=18;
    int b;
    while(i!=b){
        printf("Enter the value");
        scanf("%d",b);
        if( b>=i){
        printf("your are  adult \n");
        break;
        }
        else {
           printf("You are not adult");
        
        }
    }
        return 0;
    }