#include<stdio.h>
int main(){
    int a=0;
    int b=1;
    int n;
    printf("Enter n value");
    scanf("%d",&n);
    printf("%d %d ",a,b);
for(int i=2; i<=n; i++){
    int c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
}
return 0;
}
//011235 output