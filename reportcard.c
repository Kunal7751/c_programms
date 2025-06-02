#include<stdio.h>
int main(){
    int hindi,english,social,python,sql;
    char name[10]; 
    char roll[10];
    char clas[10];
    printf("Enter your name ! ");
    scanf("%s",&name);
    printf("Enter your roll num.! ");
    scanf("%s,",&roll);
    printf("Enter your class ! ");
    scanf("%s",&clas);
    printf("Enter hin marks ! ");
    scanf("%d",&hindi);
    printf("Enter english marks ! ");
    scanf("%d",&english);
    printf("Enter social marks ! ");
    scanf("%d",&social);
    printf("Enter python marks ! ");
    scanf("%d",&python);
    printf("Enter sql marks ! ");
    scanf("%d",&sql);

    int av=(hindi+english+social+python+sql)/5;

    printf("==============Welcome to student report card sysytem==================");
    printf("\n");

    printf("student name is %s\n",name);
    printf("student roll no. %s\n",roll);
    printf("student class is %s\n",clas);
    printf("student got %d in hindi  \n",hindi);
    printf("student got %d in english  \n",english);
    printf("student got %d in social  \n",social);
    printf("student got %d in sql  \n",sql);
    printf("student got %d in python \n",python);
    printf("the total av is %d\n",av);

    if(av<35){
        printf("You are fail, Try next year !");
    }
    else if(av<50 && av<70){
        printf("You got B grade !");
    }
    else if(av>70 && av<100){
        printf("You got 'A' grade !");
    }
    else{
        printf("Invalid value");
    }
    return 0;
}