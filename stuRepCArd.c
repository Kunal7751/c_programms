//report card using functions
#include<stdio.h>
void details(char name[10],char roll[10], char clas[10],int hindi,int english,int social,int python,int sql){
    int av=(hindi+english+social+python+sql)/5;
    
    printf("==============Welcome to student report card sysytem==================");
    printf("\n");
    printf("student name is %s\n",name);
    printf("student roll no. %s\n",roll);
    printf("student class is %s\n",clas);
    printf("student got %d in hindi  \n",hindi);
    printf("student got %d in english  \n",english);
    printf("student got %d in social  \n",social);
    printf("student got %d in sql  \n",python);
    printf("student got %d in python \n",sql);
    printf("the total av is %d is \n",av);
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
    
}
int main(){

    details("jyesh","er20","firstyear",80,60,70,75,80);
    printf("\n");
    details("kunal","er30","firstyear",45,40,30,61,45);
    printf("\n");
    details("vansh","er40","firstyear",40,30,20,41,35);
    return 0;
    
}