#include<stdio.h>
int main(){
    int arr[2][2];
    int max=0;
    printf("Enter the elements:");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
        
    }
    printf("max is %d",max);
    
return 0;
}