#include<stdio.h>
int count(int n){
    if (n <=1){
        return 0;
    }
    for (int i=2; i*i<n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int number;

    printf("Enter a number:");
    scanf("%d", &number);

    if (count(number)){
        printf("%d is a prime number\n",number);
    } else {
        printf("%d is not a prime number\n",number);
    }
    return 0;
}
 