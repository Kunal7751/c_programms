#include<stdio.h>
int main(){
    
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5-i; j++){
        printf(" ");
    }
    for(int j=1; j<=2*(i-1); j++){
        printf("%d",i);
    }
    printf("\n");
}
for(int i=5; i>=1; i--){
        for(int j=1; j<=5-i; j++){
        printf(" ");
    }
    for(int j=1; j<=2*(i-1); j++){
        printf("%d",i);
    }
    printf("\n");
}
return 0;
}