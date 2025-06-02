// Q. wap to accept 2d array elements and print 2d array into 3*3 
// matrix and count total even no and odd no in 2d array elements. 

#include<stdio.h>
int main(){
    int arr[3][3];
    int even=0, odd=0;
printf("Enter the elements");
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf(" %d",arr[i][j]);
    }
    printf("\n");
}
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        if(arr[i][j]%2==0){
           even++; 
        }
       else{
        odd++;
       }
    }
}
printf("The total numbers of even:%d\n",even);
printf("The total numbers of odd:%d\n",odd);
return 0;
}