#include<stdio.h>
int main(){
int ar[2][2];
int sum=0;
printf("Enter the elements is");
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++)
    {
        scanf("%d",&ar[i][j]);
    }
}
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        sum+=ar[i][j];
        printf(" %d",ar[i][j]);
    }
    printf("\n");
}
// printf("Sum of the elements is %d",sum);
// printf("\n");
// for(int i=0; i<2; i++){
//     for(int j=0; j<2; j++){
//         printf(" %d",ar[i][j]);
//     }
//     printf("\n");
// }
printf("Sum of the elements is %d",sum);
printf("\n");

return 0;
}