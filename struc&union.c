#include<stdio.h>
struct student{
int id;
int roll;
char name[10];
};
int main(){
    struct student a={10,85.5,"kunaal"};

    struct student b;
    printf("Enter the name:\n ");
    scanf("%s",b.name);
    printf("Enter the roll no.:\n ");
    scanf("%d",&b.roll);
    printf("Enter the id:\n ");
    scanf("%d",&b.id);

    printf("Static value Name:%s , Roll no.:%d , id:%d\n",a.name,a.roll,a.id);

    printf("dynamic value Name:%s , Roll no.:%d , id:%d\n",b.name,b.roll,b.id);

    return 0;
    
}