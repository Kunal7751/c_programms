#include<stdio.h>
struct Emp{
int id;
int seat;
char name[10];
};
int main(){
    struct Emp a={10,85.5,"kunaal"};

    struct Emp b;
    printf("Enter the name:\n ");
    scanf("%s",b.name);
    printf("Enter the seat no.:\n ");
    scanf("%d",&b.seat);
    printf("Enter the id:\n ");
    scanf("%d",&b.id);

    printf("Static value Name:%s , Roll no.:%d , id:%d\n",a.name,a.seat,a.id);

    printf("dynamic value Name:%s , Roll no.:%d , id:%d\n",b.name,b.seat,b.id);

    return 0;
    
}