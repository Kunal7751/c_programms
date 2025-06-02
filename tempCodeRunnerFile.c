#include<stdio.h>
int main(){
int ch;
printf("Enter the char: ");
scanf(" %c", &ch);

if(ch >= 'A' && ch <= 'Z')
{
    printf("The char is lowercase");
}
else{
    printf("The char is uppercase");
}
return 0;
}