#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp;
char ch;
printf("a mode: Append Only\n");
fp = fopen("Student.txt", "a");
if (fp == NULL){
    printf("Error opening file in 'a' mod\n");
    exit(1);
}
fprintf(fp, "Name: arjun, Roll: 103\n");
fprintf(fp, "Name: jayehs, Roll: 104\n");
fprintf(fp, "Name: kapil, Roll: 105\n");
fclose(fp);
printf("Data append using 'a' mod");
return 0;
}