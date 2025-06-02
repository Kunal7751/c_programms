#include<stdio.h>
void ram(){
int n=10;
printf("this is locl varible %d\n",n);
}
int main(){
    int n=100;
    ram();
    printf("This is global variable %d\n ",n);
    return 0;
}