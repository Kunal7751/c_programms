#include<stdio.h>
int main(){
	int num1;
	float num2;
	double num3;
	char num4;
	char num5[10];
	 
	printf("Enter the Int value :");
	scanf("%d",&num1);
	printf("This is Int value : %d\n ",num1);
	
	printf("Enter the float value :");
	scanf("%f",&num2);
	printf("This is float value : %f \n",num2);
	
	printf("Enter the double value :");
	scanf("%lf",&num3);
	printf("This is double value : %lf \n",num3);
	
	printf("ENter the char :\n");
	scanf(" %c",&num4);
	printf("This is char value : %c \n",num4);
	
	printf("Enter the name:");
	scanf("%s",&num5);
	printf("The name is : %s \n",num5);
	return 0;
}