#include<stdio.h>
void  details( char name[10],  int class, int roll ){
    printf("Name is :%s\n",name);
    printf("class is :%d\n",class);
    printf("roll is :%d\n",roll);
}
    int main(){
        details("kunal",30,20);
        details("jayesh",40,42);
        return 0;
    } 
    
    