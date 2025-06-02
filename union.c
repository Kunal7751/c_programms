#include<stdio.h>
#include<string.h>
union data
{
    int id;
    char name[10];
};
int main(){
    union data student;
    //asign integer
    student.id = 101;
    printf("student ID: %d\n",student.id);
    //asign string (overwrites ID)
    strcpy(student.name,"kunal");
    printf("student name : %s\n", student.name);
return 0;
}