//===Arry in c__--
#include<stdio.h>
int main(){
   // int arr[]={10,100,500,200};
    // printf("first elemnent is : %d\n",arr[0]);
    // printf("second elemnent is : %d\n",arr[1]);
    // printf("third elemnent is : %d\n",arr[2]);
    // printf("fourth elemnent is : %d\n",arr[3]);
    int arr[5];
    printf("Enter the element\n");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    printf("the element is\n");
    for(int i=0; i<5; i++){
        printf("element %d is %d\n",i,arr[i]);
    }
    return 0;
}