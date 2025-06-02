#include<stdio.h>
int main(){
int arr[2][2];
int  sum = 0;
printf("Enter the elements");
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
    scanf("%d",&arr[i][j]);
}
}
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        sum+=arr[i][j];
        printf(" %d",arr[i][j]);
    }
    printf("\n");
}
printf("the sum of elements: %d",sum);

return 0;
}