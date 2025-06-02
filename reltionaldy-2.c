#include<stdio.h>
int main(){
    int n,n1;

    printf("Enter the value");
    scanf("%d%d",&n,&n1);

    printf("This is == oprator %d\n",n==n1);
    printf("This is <= oprator %d\n",n<=n1);
    printf("This is >= oprator %d\n",n>=n1);
    printf("This is < oprator %d\n",n<n1);
    printf("This is > oprator %d\n",n>n1);
    printf("This is != oprator %d\n",n!=n1);
     
    return 0;
}