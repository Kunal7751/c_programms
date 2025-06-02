#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp;
char ch;
printf("W+ mod : Read + Write\n");
fp = fopen("student.txt","w+");
if (fp==NULL)
{
    printf("Error opening file in W+ mode\n");
    exit(1);
}
fprintf(fp, "This is new value \n");
fprintf(fp, "Name: sandya, Roll: 202\n");
rewind(fp);
printf("Reading using w+ mode:\n");
while ((ch = fgetc(fp)) !=EOF)
{
    putchar(ch);
}
fclose(fp);
return 0;
}