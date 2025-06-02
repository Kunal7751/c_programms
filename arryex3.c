#include<stdio.h>
int main(){
int ar[2][2];
printf("Enter the elements is");
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++)
    {
        scanf("%d",&ar[i][j]);
    }
}
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        printf(" %d",ar[i][j]);
    }
    printf("\n");
}
return 0;
}