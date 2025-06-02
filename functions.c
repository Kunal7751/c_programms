#include<stdio.h>
void kunal(){
    printf("This is function code \n");
    printf("without perameter & without return type\n");
    printf("Below 1000 lines of code\n");
    
}
void kunal1(int n1){
    printf("This is function code\n");
    printf("with perameter & without return type %d\n",n1);
    printf("Below 1000 lines of code\n");
}
int kunal2(){
    printf("This is function code\n");
    printf("without perameter & with return type\n");
    printf("Below 1000 lines of code\n");
    return 0;
}
int kunal3(int n1 ,int n2){
    printf("This is function code\n");
    printf("with perameter & with return type %d,%d\n",n1,n2);
    printf("Below 1000 lines of code\n");
    return 0;
}
int main(){
    kunal();
    printf("\n");
    kunal();
    printf("Our work is here\n");
    printf("\n");
    
    kunal1(10);
    printf("\n");
    kunal1(20);
    printf("Our work is here\n");
    printf("\n");

    kunal2();
    printf("Our work is here\n");
    printf("\n");

    kunal3(200,100);
    printf("Our work is here\n");
    printf("\n");
    return 0;


}