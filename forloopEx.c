#include<stdio.h>
int main(){
    int table;
    printf("Enter the value");
    scanf("%d", &table);

    for( int i=1; i<=10; i++){
        printf("Table of %d * %d is %d\n",table,i,table*i);
    }
    return 0;
}