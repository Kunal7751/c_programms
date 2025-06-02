#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp;
char ch;
// Write mod 

printf("[1] w mode :\n");
fp = fopen("student.txt","w");
if(fp == NULL){
    printf("Error");
    exit(1);
}
fprintf(fp, "Name: Ram, Roll: 101\n");
fprintf(fp, "Name: kunal , Roll: 102\n");
fclose(fp);
printf("Data return in write mod");
return 0;
}