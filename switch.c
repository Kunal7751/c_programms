#include<stdio.h>
int main(){
    int choice;
    printf(" For tea press 1:\n For coffie press 2:\n For juice press 3:\n For exit press 4:\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("You choose Tea");
        break;

        case 2:
        printf("You can choose coffie");
        break;

        case 3:
        printf("You can chosse juice");
        break;

        case 4:
        printf("You can exit ");
        break;

        default:
        printf("Invalid case");
    }
    return 0;

}