#include<stdio.h>
int main(){
    int like = 2;

    printf("Without Any Operation: %d\n",like);
    
    like = like +=2;
    printf("sum by %d is : %d\n",2,like);

    like = like -= 2;
    printf("Sub by %d is : %d\n",2,like);

    like = like *= 2;
    printf("mul by %d is : %d\n",2,like);

    like = like /= 2;
    printf("divide %d is : %d\n",2,like);

    return 0;

}