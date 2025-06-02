#include<stdio.h>
int main(){
for(int i=1; i<=5; i++){
    for(int j=1; j<=i; j++){
        printf("* ");
    }
    printf("\n");
}
for(int j=1; j<=4; j++){
    for(int i=4; i>=j; i--){
    
        printf("* ");
    }
    printf("\n");
}
return 0;
}