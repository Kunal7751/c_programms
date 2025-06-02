#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp;
char ch;
fp = fopen("student.txt","r");
if(fp == NULL){
    printf("Error openig");
    exit(1);
}
printf("Reading using r mod:\n");
while((ch = fgetc(fp)) != EOF){
    putchar(ch);
}
fclose(fp);
return 0;
}