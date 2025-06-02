#include<stdio.h>
int main(){
int arr[5];
int sum=0;
printf("Enter the elements: ");
for(int i=0; i<5; i++){
    scanf("%d",&arr[i]);
}
printf("the element is\n");
    for(int i=0; i<5; i++){
        sum += arr[i];
    }
    printf("the sum is of all elements is %d\n",sum);
return 0;
}