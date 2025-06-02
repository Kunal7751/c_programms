#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp;
char ch;
printf("a+ mod : Read + append\n");
fp = fopen("student.txt","a+");
if (fp==NULL)
{
    printf("Error opening file in W+ mode\n");
    exit(1);
}
fprintf(fp, "Name: annu, Roll: 203\n");
rewind(fp);
printf("Reading using a+ mode:\n");
while ((ch = fgetc(fp)) !=EOF)
{
    putchar(ch);
}
fclose(fp);
return 0;
}