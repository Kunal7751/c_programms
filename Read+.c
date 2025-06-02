#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char ch;

printf(" r+ mode: Read + Write (no overwrite)\n");
fp = fopen("student.txt", "r+");
if(fp == NULL){
    printf("Error opening file in r+ mode\n");
    exit(1);
}
fseek(fp, 0, SEEK_SET);
fprintf(fp, "Name: UpdatedRavi, Roll: 301\n");
rewind(fp);
printf("Reading using r+ mode:\n ");
while ((ch = fgetc(fp)) !=EOF)
{
    putchar(ch);
}
fclose(fp);
return 0;
}