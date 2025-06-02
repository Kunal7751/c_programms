#include<stdio.h>
struct student{
int id;
int roll;
char name[10];
};
int main(){
    struct student a={101, "kunaal", 85.5};

    struct student b;
    printf("Enter the name \n: ");
    scanf("%d",&b.name);
    printf("Enter the roll no.\n: ");
    scanf("%d",&b.roll);
    printf("Enter the id\n: ");
    scanf("%d",&b.id);

    return 0;
    
}